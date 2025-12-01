#include "headers/blur.h"

using namespace std;

// OPTIMIZATION: Pass large variable by reference
vector < vector <float> > blur(const vector < vector < float> >& grid, float blurring) {

	// OPTIMIZATION: window, DX and  DY variables have the 
    // same value each time the function is run.
  	// It's very inefficient to recalculate the vectors
    // every time the function runs. 
    // 
    // The const and/or static operator could be useful.
  	// Define and declare window, DX, and DY using the
    // bracket syntax: vector<int> foo = {1, 2, 3, 4} 
    // instead of calculating these vectors with for loops 
    // and push back

	int height = grid.size();
	int width = grid[0].size();

	float center = 1.0 - blurring;
	float corner = blurring / 12.0;
	float adjacent = blurring / 6.0;

  
    vector < vector <float> > window = {{corner, adjacent, corner},
                                        {adjacent, center, adjacent},
                                        {corner, adjacent, corner}};
	vector <int> DX;
	vector <int> DY;
	DX.push_back(-1); DX.push_back(0); DX.push_back(1);
	DY.push_back(-1); DY.push_back(0); DY.push_back(1);


	// OPTIMIZATION: Use your improved zeros function 
  	vector < vector <float> > newGrid(height, vector<float>(width, 0.0));

	for (int i=0; i< height; i++ ) {
		for (int j=0; j<width; j++ ) {
			float newVal = grid[i][j];
			for (int ii=0; ii<3; ii++) {
				int dy = DY[ii];
				for (int jj=0; jj<3; jj++) {
					int new_i = (i + dy + height) % height;
					int new_j = (j + DX[jj] + width) % width;
					newGrid[new_i][new_j] += newVal * window[ii][jj];
				}
			}
		}
	}

	return std::move(newGrid);
}