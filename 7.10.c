#include <stdio.h>
#include <string.h>

char a[100];
char b[100];
char max[100];
int main () {
	int zimu = 0;
	int k = 0;
	scanf("%[^\n]", a);
	for (int i = 0; i < strlen(a); ++i)
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
			zimu++;
			b[k++] = a[i];
		} else if (zimu > strlen(max)) {
			for (int j = 0; j < zimu; ++j)
			{
				max[j] = b[j];
 			}
		}
	}
	printf("%s\n", max);
	return 0;
}