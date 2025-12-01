#include "headers/sense.h"

using namespace std;

void sense(char color, const vector< vector <char> >& grid, vector< vector <float> >& beliefs,  float p_hit, float p_miss) 
{
	int height = grid.size();
	int width = grid.size();
	for (int i=0; i<height; i++) {
		for (int j=0; j<width; j++) {
            float factor = grid[i][j] == color ? p_hit : p_miss;
            beliefs[i][j] *= factor;
		}
	}
}
