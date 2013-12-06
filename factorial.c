#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

bool checkNumber (int n) {

	if(n < 0) {
		printf("负数是没有阶乘的\n");
		return false;
	} else if(n > 20){
		printf("暂时只支持到20以内，不然会爆掉\n");
		return false;
	} else {
		return true;
	}
}

int getNumber(void) {
	int a;
	do{
		printf("请输入一个数字,将返回它的阶乘\n");
		scanf("%d", &a);
	  } while (
		!checkNumber(a)
		);
	return a;
}

int main(void) {
	long resultNumber;
	int num;
	int b[MAX];
	int i;
	int j;
	int k;
	resultNumber = 1;
	num = getNumber();

	for (i = 0; i < num; i++) {
		k = num - (i+1);
		b[k] = num - i;
	}
	for (j =0; j < num; j++) {
		resultNumber = resultNumber * b[j];
	}
	printf("该数的阶乘是%ld\n", resultNumber);
	return 1;
}