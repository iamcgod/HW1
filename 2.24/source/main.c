#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("\tHW3\n");
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");
	system("pause");
}