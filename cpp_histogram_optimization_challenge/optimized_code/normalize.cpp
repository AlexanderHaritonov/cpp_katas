#include "headers/normalize.h"
using namespace std;

// OPTIMIZATION: Pass variable by reference
void normalize(vector< vector <float> >& grid) {
    int height = grid.size();
    int width = grid[0].size();
  	// OPTIMIZATION: Avoid declaring and defining 				// intermediate variables that are not needed.
	float total = 0.0;
	for (int i = 0; i <height; i++)
	{
		const vector<float>& row = grid[i];
		for (int j=0; j< width; j++)
		{
			total += row[j]; // oldProb
		}
	}

	for (int i = 0; i < height; i++) {
		for (int j=0; j< width; j++) {
			grid[i][j] = grid[i][j] / total; // newProb
		}
	}
}
