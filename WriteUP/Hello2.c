#include <stdio.h>

int main(void)
{
	char szName[0x400] = { 0, };
	char szInputKey[0x400] = { 0, };
	char szUserKey[0x400] = { 0, };
	int nNameLength = 0, nKeyLength = 0, i = 0;

	printf("name ���� �Է����ּ���(5���� �̻�): ");
	scanf_s("%s", szName, 0x400);

	printf("key ���� �Է����ּ���(5���� �̻�): ");
	scanf_s("%s", szName, 0x400);

	for (i = 0; i <= nNameLength; i++)
	{
		szName[i] += 5;
	}

	if (strcmp(szName, szUserKey) == 0)
	{
		// ����
	}
	else{
		// ����
	}

	return(0);
}