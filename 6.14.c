#include <stdio.h>

int main() {
	int i,resu;
	char s1[100], s2[100];
	printf("请给S1赋值\n");
	gets(s1);
	printf("请给S2赋值\n");
	gets(s2);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0')) {
		i++;
	}
	if(s1[i] == '\0' && s2[i] == '\0') {
		resu = 0;
	} else {
		resu = s1[i] - s2[i];
	}
	printf("%d\n", resu);
	return 0;
}