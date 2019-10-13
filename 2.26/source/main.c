#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("\tHW5\n");
	printf("Enter 2 intergers\n");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%f\n", a / (float)b);
	system("pause");
}