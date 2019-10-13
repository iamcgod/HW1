#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("\tHW7\n");
	printf("number\tspuare\tcube\n");
	for (int i = 0;i < 11;i++)
		printf("%d\t%d\t%d\t\n", i, i*i, i*i*i);
	system("pause");
}