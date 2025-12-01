#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(const vector< vector <char> >& grid) {
	int height = grid.size();
	int width = grid[0].size(); 
	int area = height * width;
  	float prob_per_cell = 1.0 / area; 
  
   	vector< vector<float> > newGrid (height, vector<float>(width, prob_per_cell));
	return std::move(newGrid);
}