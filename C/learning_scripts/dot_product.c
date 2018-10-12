#include <stdio.h>

int dot ( int x1, int y1, int z1, int x2, int y2, int z2 ) ;

int main()
{
	int x1;
	int y1;
	int z1;
	int x2;
	int y2;
	int z2;

	printf( "Input two sets of 3D coordinates (in the order: X1, Y1, Z1, X2, Y2, Z2) to get their dot product: " );

	scanf( "%d", &x1 );
	scanf( "%d", &y1 );
	scanf( "%d", &z1 );

	scanf( "%d", &x2 );
	scanf( "%d", &y2 );
	scanf( "%d", &z2 );

	printf( "The dot product of your coordinates is %d\n", dot( x1, y1, z1, x2, y2, z2 ) );
	getchar();
}

int dot ( int x1, int y1, int z1, int x2, int y2, int z2 )
{
	return (x1 * x2) + (y1 * y2) + (z1 * z2);
}
