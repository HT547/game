
#include <string>
#include <iomanip>
#include"2048.h"

using namespace std;
g2048:: g2048() : done(false), win(false) {}
bool g2048::isready()
{
	char ready = ' ';
	cout << "WELCOME TO 2048 !!" << endl;
	cout << "are you ready ? (y=yes/n=no) " << endl;
	cin >> ready;
	if (ready == 'y')
	{
		return true;
	}
	else
		return false;

}
void g2048::  loop()
	{
		if (isready())
		{
			addTile();
			while (true)
			{
				drawBoard();
				if (done) break;

			}
		}
		else
			cout << " please come back when you're ready we will be here " << endl;
	}
	void g2048:: drawBoard()
	{
	
		cout << endl <<endl;
		for (int y = 0; y < 4; y++)
		{
			cout << "+------+------+------+------+" << endl << "| ";
			for (int x = 0; x < 4; x++)
			{
				if (!board[x][y].val) cout << setw(4) << " ";
				else cout << setw(4) << board[x][y].val;
				cout << " | ";
			}
			cout << endl;
		}
		cout << "+------+------+------+------+" << endl << endl;
	}
	
	void g2048:: addTile()
	{
		for (int y = 0; y < 4; y++)
			for (int x = 0; x < 4; x++)
				if (!board[x][y].val)
				{
					int a, b;
					do
					{
						a = rand() % 4; b = rand() % 4;
					} while (board[a][b].val);

					int s = rand() % 100;
					if (s >=90) board[a][b].val = 4;
					else board[a][b].val = 2;
					
				}
		done = true;
	}

	
	
 
