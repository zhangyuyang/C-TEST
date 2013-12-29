#include <stdio.h>
#include <string.h>

int main () {
	int daxie = 0;
	int xiaoxie = 0;
	int num = 0;
	int space = 0;
	int other = 0;
	char a[100];
	char *p;
	printf("请输入一段文字\n");
	scanf("%[^\n]", a);
	p = a;
	for (int i = 0; i < strlen(a); ++i)
	{
		if (*(p + i) >= 'A' && *(p + i) <= 'Z')
			daxie++;
		else if(*(p + i) >= 'a' && *(p + i) <= 'z')
			xiaoxie++;
		else if(*(p + i) >= '0' && *(p + i) <= '9')
			num++;
		else if(*(p + i) == ' ')
			space++;
		else 
			other++;
	}
	printf("大写字母%d\n", daxie);
	printf("小写字母%d\n", xiaoxie);
	printf("数字%d\n", num);
	printf("空格%d\n", space);
	printf("其他%d\n", other);
	printf("%s\n", p);
	return 0;
}