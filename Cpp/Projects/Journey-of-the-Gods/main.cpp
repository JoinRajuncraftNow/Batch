#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100
using namespace std;
void move() //Just a test. DON'T MESS WITH THIS
{
	int c=0, d=0, x=0, y=0;
	for(;;)
	{
 		//If you put d=getch() and c=getch() what is the point?
		d=getch();
		switch(c=getch()) //That was annoying me to death
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
int main()
{
   move();
}

