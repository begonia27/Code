#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum PositionType
{
	POS_MOVE,
	POS_WALL,
	POS_BOX,
};

void loadMap();
void getInput();
void updateGame();
void draw();
void checkWin();
PositionType checkPos(int x, int y);

enum object
{

};