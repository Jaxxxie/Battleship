#include "Grid.h"
#include <cstdlib>

char my_grid[DIMENSION][DIMENSION];
const char isHIT = 'X';
const char isMiss = 'O';
int numShips = 4;

struct point {
	int X;
	int Y;
};
struct aircraftCarrier {
	string shipType;
	int length;
	point my_grid[6];
	bool isHit[6];
};
struct battleship {
	string shipType;
	int length;
	point my_grid[4];
	bool isHit[4];
};
struct destroyer {
	string shipType;
	int length;
	point my_grid[3];
	bool isHit[3];
};
struct submarine {
	string shipType;
	int length;
	point my_grid[2];
	bool isHit[2];
};
enum DIRECTION {HORIZONAL, VERTICAL};
struct PLACESHIPS {
	DIRECTION direction;
	
};

int main() {
	

	do {
		my_grid[2][3] = 'T';
		my_grid[2][4] = 'e';
		my_grid[2][5] = 'x';
		my_grid[2][6] = 't';
		my_grid[4][1] = (char)175;
		my_grid[4][2] = (char)178;
		my_grid[4][3] = (char)176;
		my_grid[4][4] = (char)178;
		my_grid[4][5] = (char)174;

	

		draw_grid(my_grid);

		system("PAUSE");
		my_grid[1][2] = 'N';
		my_grid[1][3] = 'e';
		my_grid[1][4] = 'w';
		draw_grid(my_grid);
		system("PAUSE");
		return 0;

	} while (numShips > 1);
}
