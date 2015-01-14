#include <stdio.h>

int main(void)
{
	int arr[4] = { 0x91, 0x20, 0x47, 0x29 };
	int shrResult = 0;
	int shlResult = 0;

	shrResult = (*(arr + (1 * 3))) * (*(arr + (1 << 1)));
	shrResult += *(arr + 1);
	shrResult >>= 4;

	shlResult = (*(arr + (1 * 3))) * (*(arr + (1 << 1)));
	shlResult += *(arr + 1);
	shlResult <<= 8;

	printf("%d\n%d\n", shrResult, shlResult);

	return 0;
}