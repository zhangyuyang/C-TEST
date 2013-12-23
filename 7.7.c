#include <stdio.h>
#include <string.h>

char a[100];
char b[100];

int main () {
	int j = 0;
	printf("请输入字符串\n");
	scanf("%[^\n]",a);
	printf("\n%s\n", a);
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
			b[j] = a[i];
			j++;
		}
	}
	printf("B数组输出\n");
	printf("%s\n", b);
	return 0;
}