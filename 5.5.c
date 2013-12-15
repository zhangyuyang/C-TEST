#include <stdio.h>
#define MAX 1000

long kkk(int num, int i) {
	int temp = 1;
	for(int j = 0; j < i; j++) {
		temp = temp * num;
	}
	return temp;
}
 
int main() {
	int k = 0;
	long b[MAX];
	int a;
	int n;
	long temp = 0;
	long resultNum = 0;
	printf("请输入A的数值（N必须小于10，长整型范围）\n");
	scanf("%d", &a);
	printf("请输入N的值\n");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		b[i] = a * kkk(10, i) + temp;
		temp = b[i];
		printf("%ld\n", b[i]);
		resultNum = resultNum + b[i];
	}
	printf("最终结果是%ld\n", resultNum);
	return 0;
}