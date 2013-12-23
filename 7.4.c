#include <stdio.h>

int main () {
	int a[3][3];
	printf("请按顺序给数组赋值\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d", a[i][j]);
			if (j == 2) {
			} else {
				printf(",");
			}
		}
		printf("\n");
	}
	printf("========================\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 2; j >= 0; j--) 
		{
			printf("%d", a[j][i]);
			if (j == 0) {
			} else {
				printf(",");
			}
		}
		printf("\n");
	}
	return 0;
}