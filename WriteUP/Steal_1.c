#include <stdio.h>

int main(void)
{
	int X1, Y1;
	int X2, Y2;
	int rX, rY;
	int area;

	printf("사각형넓이를 구해보자\n\n");

	printf("좌표1: ");
	scanf_s("%d %d", &X1, &Y1, 4, 4);

	printf("좌표2: ");
	scanf_s("%d %d", &X2, &Y2, 4, 4);

	if (X1 <= X2)
	{
		rX = X2 - X1;
	}
	else{
		rX = X1 - X2;
	}

	if (Y1 <= Y2)
	{
		rY = Y2 - Y1;
	}
	else{
		rY = Y1 - Y2;
	}

	area = rX * rY;
	printf("사각형 넓이: %d\n", area);

	return(0);
}