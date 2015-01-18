#include <stdio.h>

int main(void)
{
	char szName[0x400] = { 0, };
	char szInputKey[0x400] = { 0, };
	char szUserKey[0x400] = { 0, };
	int nNameLength = 0, nKeyLength = 0, i = 0;

	printf("name 명을 입력해주세요(5글자 이상): ");
	scanf_s("%s", szName, 0x400);

	printf("key 명을 입력해주세요(5글자 이상): ");
	scanf_s("%s", szName, 0x400);

	for (i = 0; i <= nNameLength; i++)
	{
		szName[i] += 5;
	}

	if (strcmp(szName, szUserKey) == 0)
	{
		// 정답
	}
	else{
		// 오답
	}

	return(0);
}