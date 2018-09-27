#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;
int main()
{	
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute( h , FOREGROUND_GREEN );
	srand(time( NULL ));
	kittu:
	for (int i = 0; i < 15; i++)
	{
		printf("% 05d", rand() % 9999);
		/*cout << (rand() % 9901) + 100 << " ";*/
	}
	cout << endl;
	goto kittu;
	return 0;
}
