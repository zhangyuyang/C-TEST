#include <stdio.h>
#include <string.h>

char a[100];
int main () {
	int zimu = 0;
	int number = 0;
	int space = 0;
	int other = 0;
	scanf("%[^\n]", a);
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i] >= '0' && a[i] <= '9') {
			number++;
		} else if (a[i] >= 'a' && a[i] <= 'z') {
			zimu++;
		} else if (a[i] >= 'A' && a[i] <= 'Z') {
			zimu++;
		} else if (a[i] == ' ') {
			space++;
		} else {
			other++;
		}
	}
	printf("字母%d\n", zimu);
	printf("数字%d\n", number);
	printf("空格%d\n", space);
	printf("其他%d\n", other);
	return 0;
}