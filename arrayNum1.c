#include <stdio.h>
#include "arrayNum2.c"
#define MAX 1000

int main(void) {
	int a[MAX];
	printf("this is print1\n ");
	int abc = checkArray(a);
	if(abc == 1) {
	printf("这个数组是符合正序排列\n");
    } else {
    	printf("这个数组不合法或者不符合排列顺序\n");
    }
	return 0;
}