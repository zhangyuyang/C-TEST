#include <stdio.h>

void qipao (int a[]) {
	int temp;
	for (int j = 0; j < 10; ++j)
	{
			for (int i = 0; i < 10 ; ++i)
			{	
				if (a[i] >= a[i + 1]) {
					temp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = temp;
				}
			}
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d,", a[i]);
	}
}

int main () {
	int b[10];
	printf("请输入需要排序的数字\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &b[i]);
	}
	qipao(b);
	return 0;
}