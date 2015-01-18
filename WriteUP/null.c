#include <stdio.h>

int main(void)
{
	int ebp8 = 0x64, ebp14 = 4;
	int ebp20 = ebp8 * ebp14;


	printf("%d", ebp20 / 4);

	return(0);
}