#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numLen = 0;

int *printNum(void) {
	int *array;
	array = (int*)calloc(100,sizeof(int));
	printf("请输入10个数字\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &array[i]);
		numLen++;
	}
	printf("numLen=%d\n", numLen);
	return array;
}

int isMax(int *a, int length) {
	int k = 0;
	int j = 0;
	for (int i = 0; i < length; ++i)
	{
		if (a[i] > k) {
			k = a[i];
		}
	}
	printf("数组里面最大数是%d\n", k);
	for (int i = 0; i < length; ++i)
	{
		if (a[i] == k) {
			j = i;
			break;
		}
	}
	return j;
}

int isMin(int *a, int length) {
	int k = 100;
	int j = 0;
	for (int i = 0; i < length; ++i)
	{
		if (a[i] < k) {
			k = a[i];
		}
	}
	printf("数组里面最小数是%d\n", k);
	for (int i = 0; i < length; ++i)
	{
		if (a[i] == k) {
			j = i;
			break;
		}
	}
	return j;
}

void chuli(int *array, int length) {
	int max, min;
	int temp = 0;
	max = isMax(array, length);
	temp =  array[length-1];
	array[length-1] = array[max];
	array[max] = temp;
	min = isMin(array, length);
	temp =  array[0];
	array[0] = array[min];
	array[min] = temp;
	
}

int main () {
	int *a;
	a = printNum();
	chuli(a, numLen);
	for (int i = 0; i < numLen; ++i)
	{
		printf("第%d个数字是%d\n", i+1, a[i]);
	}
	free(a);
	return 0;
}