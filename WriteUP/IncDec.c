#include <stdio.h>

int main( void )
{
	int EBP8 = 0, EBP14 = 0x0a;
	double EBP24;

	printf("%d %d \n", EBP8++, EBP14--);
	printf("%d %d \n", EBP8++, EBP14--);
	printf("%d %d \n", EBP8++, EBP14--);

	EBP24 = (double)EBP14 / (double)EBP8;
	printf("%d %d %lf \n", EBP8, EBP14, EBP24);

	return(0);
}