#include <stdio.h>

void test(int *po) {
	int temp = 0;
	for (int i = 0; i < 23; ++i)
	{
		for (int i = 0; i < 24; ++i)
		{
			if(*(po + i) > *(po + i + 1)) {
				temp = *(po + i);
				*(po + i) = *(po + i + 1);
				*(po + i + 1)  = temp;
			}
		}
	}
	printf("max%d\n", *(po + 24));
	temp = *(po + 10 + 2);
	*(po + 10 + 2) = *(po + 24);
	*(po + 24) = temp;
	printf("min%d,%d,%d,%d,\n", *po, *(po + 1), *(po + 2), *(po + 3));
	temp = *(po + 4);
	*(po + 4) = *(po + 1);
	*(po + 1) = temp;
	temp = *(po + 20);
	*(po + 20) = *(po + 2);
	*(po + 2) = temp;
	temp = *(po + 20 + 4);
	*(po + 20 + 4) = *(po + 3);
	*(po + 3) = temp;
	printf("转换后\n");	
	for (int i = 1; i <= 25; ++i)
	{
		printf("%3d,", *(po + i - 1));
		if(i % 5 == 0) {
			printf("\n");
		}
	}
}


int main() {
	int a[5][5];
	int *p = a[0];
	printf("请先给数组赋值\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("第%d行\n", i+1);
		for (int j = 0; j < 5; ++j)
		{
			scanf("%3d", &a[i][j]);
		}
	}
	printf("数组A为\n");
	for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				printf("%3d,",a[i][j]);
			}
			printf("\n");
		}	
	test(p);
	return 0;
}