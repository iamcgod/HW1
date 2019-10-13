#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("\tHW8\n");
	printf("Enter your weight(KG)\n");
	float w;
	scanf_s("%f", &w);
	printf("Enter your height(cm)\n");
	float h;
	scanf_s("%f", &h);
	h /= 100;
	printf("Your BMI = %f\n", w / h / h);
	printf("BMI VALUES\nUnderweight:\tless than 18.5\nNormal:\t\tbetween 18.5 and 24.9\nOverweight:\tbetween25 and 29.9\nObese:\t\t30 or greater\n");
	system("pause");
}