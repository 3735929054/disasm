#include <stdio.h>

int main(void)
{
	int ebp8 = 0, ebp14 = 0, ebp20 = 0;

	printf("==================");
	printf("====�ȳ��ϼ���.====");
	printf("===�� ���� ��������==");
	printf("==================");
	printf("\n");

	scanf_s("%d %d", &ebp8, &ebp14, 4, 4);
	printf("%d, %d", ebp8, ebp14);

	printf("��Ģ������ �Է����ּ��� <1:����, 2:����, 3:����, 4:������");
	scanf_s("%d", ebp20, 4);
	ebp20--;

	if (3 < ebp20)
		return 0;

	switch (ebp20)
	{
	case 0:
		printf("%d + %d = %d\n", ebp8, ebp20, ebp8 + ebp20);
		break;
	case 1:
		printf("%d + %d = %d\n", ebp8, ebp20, ebp8 - ebp20);
		break;
	case 2:
		printf("%d + %d = %d\n", ebp8, ebp20, ebp8 * ebp20);
		break;
	case 3:
		printf("%d + %d = %f\n", ebp8, ebp20, (float)ebp8 + (float)ebp20);
		break;
	default:
		break;
	}

	return 0;
}