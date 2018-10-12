#include <stdio.h>

int main()
{
	int x;

	x = 10;
	do {
		printf( "Hello World\n" );
		x--;
	} while ( x != 0 );
	
	getchar();
}
