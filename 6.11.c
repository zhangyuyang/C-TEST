#include <stdio.h>

int main() {
	char space = ' ';
	char a[9] = {'*',' ','*',' ','*',' ','*',' ','*'};
	for (int j = 0; j <= 4; j++) {	
		for (int i = 0; i <= j; ++i)
		{
			printf("%c", space);
		}
		printf("%s\n", a);

	}
	return 0;
}