#include <stdio.h>

int doSmall(int n, int a[10]) {
	int flag = 9999;
	for (int i = 0; i <= 5; i++)
	{
		if (a[i] == n)
		{	
			flag = i;
		}
	}
	return flag;
}

int doMax(int n, int a[10]) {
	int flag = 9999;
	for (int i = 5; i < 10; i++)
	{
		if (a[i] == n)
		{
			flag = i;
		} 
	}
	return flag;
}

int main() {
	printf("请按从小到大的顺序输入数组\n");
	int	a[10];
	int n;
	int result;
	for (int i = 0; i < 10; ++i)
	{
		printf("请输入第%d个数字\n", i+1);
		scanf("%d", &a[i]);
	}
	printf("请输入数字N\n");
	scanf("%d", &n);
	if(a[4] >= n) {
		result = doSmall(n, a);
	} else {
		result = doMax(n, a);
	}
	if (result == 9999)
	{
		 printf("没有这个数字\n");
	} else {
		printf("这个数字是a[%d]他的值是%d\n", result, a[result]);
	}
	return 0;
}