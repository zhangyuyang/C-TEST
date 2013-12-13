#include <stdio.h>
#define MAX 5
// int main() {
// 	int c;
// 	int i = 0;
// 	char num[5];
// 	printf("请输入一个不超过5位的数字\n");
// 	while ((c = getchar()) != '\n') {
// 		num[i] = (int)c - 48;
// 		i++;
// 	}
// 	printf("这是一个%d位数\n", i);
// 	for (int j = 0; j < i; j++) {
// 		printf("第%d位数是%d\n", j+1, num[j]);
// 	}
// 	printf("下面逆向输出各数字\n");
// 	for(int k = i - 1; k >= 0; k--) {
// 		printf("%d\n", num[k]);
// 	}

// 		return 0;
// }

//以下是第二种方法
int main() {
	int num = 0;
	int a[MAX];
	int temp1;
	int j = 0;
	printf("请输入数字\n");
	scanf("%d", &num);
	printf("您输入的数字是%d\n", num);
	temp1 = num;
	for(int i = 0; i < MAX; i++) {
		a[i] = temp1 % 10;
		temp1 = temp1 / 10;
		printf("逆向输出各数字%d\n", a[i]);
		if(temp1 < 1) {
			break;
		}
		j = i;
	}
	for(int k = j+1; k >= 0; k--) {
		printf("正向输出%d\n", a[k]);
	}
	return	0;
}