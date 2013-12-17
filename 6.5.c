#include <stdio.h>

int main() {
	int a[10];
	int temp;
	printf("请输入10个整数\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
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
	printf("逆向排序＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝\n");
	for (int i = 9; i >= 0; i--) {
		printf("%d\n", a[i]);
	}
}