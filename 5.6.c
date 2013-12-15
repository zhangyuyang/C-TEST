#include <stdio.h>
#define MAX 20

int main() {
	long temp1 = 1;
	long temp2 = 0;
	printf("求1！+2！+3！+ 。。。+20！\n");
	for(int i = 1; i <= MAX; i++) {
		temp1 = temp1 * i;
		temp2 = temp1 + temp2;
	}
	getchar();
	printf("temp2是%ld\n", temp2);
	return 0;
}