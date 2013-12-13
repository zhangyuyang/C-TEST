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


int jiecheng(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n * jiecheng(n - 1);
	}
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
	// for(i = 0; i < num; i++) {
	// 	resultNumber = resultNumber * (i + 1);
	// }
	// printf("该数的阶乘是%ld\n", resultNumber);
	printf("该数的阶乘是%d\n", jiecheng(num));
	return 0;	
}