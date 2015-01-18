#include <stdio.h>
#include <string.h>

int main(void)
{
	char szName[256] = { 0, };
	char Key[13] = "!@#$%^&*()_+";
	int i = 0, j = 0;

	scanf_s("%s", szName, 256);

	if( 255 < strlen(szName) )
		return(0);

	while(szName[i] != '\0')
	{
		if(11 < j) j = 0;

		szName[i] ^= Key[j];

		j++;
		i++;
	}

	printf("%s", szName);

	return(0);
}