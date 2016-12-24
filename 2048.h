#include<iostream>
#include"tile.h"
class g2048
{
private:
	tile  board[4][4];
	bool win, done;
	void drawBoard();
	void addTile();
	bool isready();

public:

	g2048();
	void loop();

};
	
	
