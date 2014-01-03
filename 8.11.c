#include <stdio.h>

void test(char *p1,char *p2,char *p3,char *p4,char *p5,char *p6,char *p7,char *p8,char *p9,char *p10) {
	printf("%s%s%s%s%s%s%s%s%s%s\n", p1,p2,p3,p4,p5,p6,p7,p8,p9,p10);
}

int main() {
	char a[10];
	char b[10];
	char c[10];
	char d[10];
	char e[10];
	char f[10];
	char g[10];
	char h[10];
	char l[10];
	char m[10];
	printf("输入10个字符串\n");
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	scanf("%s", d);
	scanf("%s", e);
	scanf("%s", f);
	scanf("%s", g);
	scanf("%s", h);
	scanf("%s", l);
	scanf("%s", m);
	char *p1 = a;
	char *p2 = b;
	char *p3 = c;
	char *p4 = d;
	char *p5 = e;
	char *p6 = f;
	char *p7 = g;
	char *p8 = h;
	char *p9 = l;
	char *p10 = m;
	test(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10);

	return 0;
}