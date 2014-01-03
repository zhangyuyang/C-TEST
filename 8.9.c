#include <stdio.h>

int main() {
	int a[3][3];
	int *p;
	p = a[0];
 	for (int i = 0; i < 3; ++i)
 	{
 		printf("输入第%d排\n", i+1);
 		for (int j = 0; j < 3; j++)
 		{
 			scanf("%d", &a[i][j]);
 		}
 	}
 	printf("下面打印A数组\n");
 	for (int i = 0; i < 3; ++i)
 	{
 		printf("%d,", a[0][i]);
 	}
 	printf("\n");
 	for (int i = 0; i < 3; ++i)
 	{
 		printf("%d,", a[1][i]);
 	}
 	printf("\n");
 	for (int i = 0; i < 3; ++i)
 	{
 		printf("%d,", a[2][i]);
 	}
 	printf("翻转后\n");//二维数组用指针可以表示为 p+nx+y  y为行下标，X为列下标，N是二维数组一行有N个值
 	for (int i = 0; i < 3; ++i)
 	{
 		for(int j = 6; j >= 0; j = j - 3)
 		{
 			printf("%d,", *p + j + i);
 		}
 		printf("\n");
 	}

 	return 0;
}