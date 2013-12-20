#include <stdio.h>

int main()
{
	int i, j, upp, low, dig, spa, oth;
	char text[3][80];
	upp = low = dig = spa = oth =0;
	for (int i = 0; i < 3; i++)
	{
		gets(text[i]);
		for (j = 0; j < 80 && text[i][j] != '\0'; j++) {
			if(text[i][j] >= 'A' && text[i][j] <= 'Z') {
				upp++;
			} else if (text[i][j] >= 'a' && text[i][j] <= 'z') {
				low++;
			} else if (text[i][j] >= '0' && text[i][j] <= '9') {
				dig++;
			} else if (text[i][j] == ' ') {
				spa++;
			} else {
				oth++;
			}
		}
		printf("upp%d\n", upp);
		printf("low%d\n", low);
		printf("digit%d\n", dig);
		printf("space%d\n", spa);
		printf("other%d\n", oth);
	}
	return 0;
}