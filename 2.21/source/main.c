#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char arr[][35] = {	{ "*********   ***      *        *    " },
						{ "*       *  *   *    ***      * *   " }, 
						{ "*       * *     *  *****    *   *  " }, 
						{ "*       * *     *    *     *     * " },
						{ "*       * *     *    *    *       *" }, 
						{ "*       * *     *    *     *     * " }, 
						{ "*       * *     *    *      *   *  " }, 
						{ "*       *  *   *     *       * *   " }, 
						{ "*********   ***      *        *    " }};
	printf("\t\tHW1\n");
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 34;j++) {
			printf("%c", arr[i][j]);
		}
		printf("%c\n", arr[i][34]);
	}
	printf("\n");
	system("pause");
}