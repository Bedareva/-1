#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    int i; 
    int pow = 0; 
    setlocale(0, "");
    for (i = 0; i < 10; i++)
	{{
        pow = 2 * i;
    }
	{Sleep(rand() % 1000 + 0);}
	cout <<  pow << endl;    }     
    return 0;
}
