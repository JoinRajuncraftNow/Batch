#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100
#define ARROW_ESC 224
//You need the 224 Alex! Type 'p' then the arrow key, IT BREAKS on your old version!
using namespace std;
void move() //Just a test. DON'T MESS WITH THIS
{
	int c = 0, d=0, x=0, y=0;
	while(1)
	{
  		c=0;
		d=0;
		d=getch();
		if(d==ARROW_ESC) //assure arrow!
		{
			switch((c=getch())) 
			{
			case KEY_UP:
				x++;    //key up
				break;
			case KEY_DOWN:
				x--;   // key down
				break;
			case KEY_LEFT:
				y++;  // key left
				break;
			case KEY_RIGHT:
				y--;  // key right
				break;
			default:
				cout << endl << "null" << endl;  // not arrow
				break;
			}
		}
	}
}
int main()
{
   move();
}

