#include <stdio.h>

int main() {
	int a[3][3];
	int k1, k2;
	printf("请输入第一行三个数\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[0][i]);
		}
	printf("请输入第二行三个数\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[1][i]);
		}
	printf("请输入第三行三个数\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[2][i]);
		}
	for (int i = 0; i < 3; i++) {
		printf("%d,", a[0][i]);
		}
		printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d,", a[1][i]);
		}
		printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d,", a[2][i]);
		}
		printf("\n");
 	k1 = a[0][0] + a[1][1] + a[2][2];
 	k2 = a[0][2] + a[1][1] + a[2][0];

 	printf("%d\n", k1);
	printf("%d\n", k2); 
	return 0;

}