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
	
int main () {
	// char string[300];
	char *a, *b, *c;
	char *temp;
	a = scanfUp();
	b = scanfUp();
	c = scanfUp();
	// // a = (char*)malloc(1000*sizeof(char));
	// a = (char*)calloc(1000, sizeof(char));
	// printf("A字符串\n");
	// scanf("%[^\n]", a);
	// getchar();
	// b = (char*)malloc(1000*sizeof(char));
	// printf("B字符串\n");
	// scanf("%[^\n]", b);
	// getchar();
	// c = (char*)malloc(1000*sizeof(char));
	// printf("C字符串\n");
	// scanf("%[^\n]", c);
	// getchar();
	// if(strlen(a) >= strlen(b)) {
	// 	temp = a;
	// 	a = b;
	// 	b = temp;
	// }
	// if (strlen(a) >= strlen(c)) {
	// 	temp = a;
	// 	a = c;
	// 	c = temp;
	// }
	// if (strlen(b) >= strlen(c)) {
	// 	temp = b;
	// 	b = c;
	// 	c = temp;
	// }
	printf("(%s),,(%s),,(%s)\n", a, b, c);
	free(a);
	free(b);
	free(c);
	return 0;
}