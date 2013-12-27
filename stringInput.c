#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *scanfUp() { 
	//可以输入除了回车以外的任何字符
	//示例：char *a;
	//a = scanfUp();
	char *array;
	array = (char*)calloc(1000,sizeof(char));
	printf("请输入字符串\n");
	scanf("%[^\n]", array);
	getchar();
	return array;
	free(array);
}
	