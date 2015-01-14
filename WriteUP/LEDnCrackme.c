#include <stdio.h>
#include <string.h>

int main(void)
{
	char szName[1000] = { 0, };
	int NameLength = 0, CodeLength = 0, idx = 0;

	printf("Nmae: ");
	scanf_s("%s", szName, 1000);

	NameLength = strlen(szName);

	if( 5 > NameLength )
		return 0;

	while (szName[idx] != '\0')
	{
		szName[idx] += szName[idx] % 0x14;
		if(( (szName[idx] - 0x5) % 0x3 ) == 0){
			szName[idx] = (szName[idx] % 0x0A) + 0x30;
		}
		else if(( (szName[idx] - 0x5) % 0x3 ) == 1){
			szName[idx] = (szName[idx] % 0x1A) + 0x41;
		}
		else if(( (szName[idx] - 0x5) % 0x3 ) == 2){
			szName[idx] = (szName[idx] % 0x1A) + 0x61;
		}

		idx++;
	}

	printf("Code: %s", szName);
}