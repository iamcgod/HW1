#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("hw23\n");
	printf("Enter 3 intergers\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (c > b)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	if (b > a) 
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (c > b)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("Largest:%d\n", a);
	printf("Smallest:%d\n", c);
	system("pause");
}