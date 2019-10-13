#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	printf("\tHW9\n");
	printf("Enter\ta) Total miles driven per day\n\tb) Cost per gallon of gasline\n\tc) Average miles per gallon\n\td) Parking fees per day\n\te) Tolls per day\n");
	scanf_s("%d%d%d%d%d", &a,&b,&c,&d,&e);
	printf("Cost:%f\n", (float)a / c * b + d + e);
	system("pause");
}