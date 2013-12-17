#include <stdio.h>

int main() {
	int a[10];
	int temp;
	int b;
	printf("请输入9个整数\n");
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
		}
		printf("===================\n");
	for (int j = 0; j < 9; j++) {
		for (int i = 0; i < (8 - j); i++) {
		if (a[i] < a[i + 1]) {
			temp = a[i];
		    a[i] = a[i + 1];
		    a[i + 1] = temp;
		}
	  }
	}
	for (int i = 0; i < 9; i++) {
		printf("%d\n", a[i]);
	}
	printf("===================\n");
	printf("请输入B的值\n");
	scanf("%d", &a[9]);
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < (9 - j); i++) {
		if (a[i] < a[i + 1]) {
			temp = a[i];
		    a[i] = a[i + 1];
		    a[i + 1] = temp;
		}
	  }
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}
}