#include<iostream>
#include<windows.h>
#include<conio.h>
#include"C_game.h"

using namespace std;


//가로 22 >> 110
//세로 11 >> 55
int main(void)
{
	SetConsoleSize(consolesize_x, consolesize_y);
	SetConsoleTitle("game");
	
	
	
	BOOL x_y_address_bool[55][55];
	

	for (int j = 0; j < 55; j++)
	{
		for (int i = 0; i < 55; i++)
		{
			x_y_address_bool[j][i] = false;
		}
	}
	int _x = 10, _y = 10;
	int _scanf;
	
	while (1)
	{	
		clear();
		for (int j = 0; j < 55; j++)
		{
			for (int i = 0; i < 55; i++)
			{
				if (x_y_address_bool[i][j] == true)
				{
					goxy(i * 2, j);
					cout << "□";
				}
			}
		}
		goxy(_x, _y);
		cout << "■";
		if (_kbhit())
		{	
			_scanf = _getch();
			switch (_scanf)
			{
			case LEFT:
				_x -= 2;
				if (_x < 0)
					_x = 0;
				break;
			case RIGHT:
				_x += 2;
				if (_x > 108)
					_x = 108;
				break;
			case UP:
				_y--;
				if (_y < 0)
					_y = 0;
				break;
			case DOWN:
				_y++;
				if (_y > 54)
					_y = 54;
				break;
			case 'e':
				exit(0);
			case space:
				x_y_address_bool[_x/2][_y] = true;
				break;
			}
				
		}
		
		Sleep(20);
	}

	
	
	
	
	return 0;
}