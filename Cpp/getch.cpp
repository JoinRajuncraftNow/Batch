#ifdef _WIN32
#define _WIN64
#endif
#ifdef __unix
#define __linux__
#endif
#ifdef __unix__
#define __linux__
#endif
using namespace std;
#ifdef _WIN64
#include <conio.h>
int getch_()
{
	return getch();
}
#endif
#ifdef __linux__
#include <fstream>
#include <cstdlib>
//Python must be compiled with curses
int getch_()
{
    system("python -c 'import readchar;u=ord(readchar.readchar());f=open(\"c.txt\",\"w\");f.write(str(u))'"); //Obviously very hacked together
    ifstream i;
    i.open("c.txt");
    int u;
    i >> u;
    i.close();
    return u;
}
#endif

#include <iostream>
int main()
{
	int u;
	for(;;){u=getch_();cout << u << endl;}
}
