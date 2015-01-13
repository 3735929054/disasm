#include <stdio.h>

int main( void )
{
	int i = 0xFF00;
	int j = 0x00FF;

	i = i ^ j;
	i = i << 16;

	printf("%d", i);

	return(0);
}