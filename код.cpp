#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    int i; // счетчик цикла
    int pow = 0; // сумма чисел от 1 до 1000.
    setlocale(0, "");
    for (i = 0; i < 10; i++)
	{{
        pow = 2 * i;
    }
	{Sleep(rand() % 1000 + 0);}
	cout <<  pow << endl;    }     
    return 0;
}
