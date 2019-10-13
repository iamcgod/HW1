#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("\tHW4\n");
	char arr[][10] = { {"ppppppppp"},
						{"    p   p"},
						{"    p   p"},
						{"    p   p"},
						{"     p p "},
						{"         "},
						{"  JJ     "},
						{" J       "},
						{"J        "},
						{" J       "},
						{"  JJJJJJJ"},
						{"         "},
						{"DDDDDDDDD"},
						{"D       D"},
						{"D       D"},
						{" D     D "},
						{"  DDDDD  "} };
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		for (int j = 0;j < 9;j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("%c\n", arr[i][9]);
	}
	printf("\n");
	system("pause");
}