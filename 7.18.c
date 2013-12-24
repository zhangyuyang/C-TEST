#include <stdio.h>

int main () {
	int year = 0;
	int month = 0;
	int day = 0;
	int total = 0;
	int yiyue = 31;
	int eryue = 0;
	int sanyue = 31;
	int siyue = 30;
	int wuyue = 31;
	int liuyue = 30;
	int qiyue = 31;
	int bayue = 31;
	int jiuyue = 30;
	int shiyue = 31;
	int shiyiyue = 30;
	int shieryue = 31;
	printf("给出年份\n");
	scanf("%d",  &year);
	printf("给出月份\n");
	scanf("%d", &month);
	printf("给出日\n");
	scanf("%d", &day);
	if (year % 4 == 0) {
		eryue = 29;
	} else {
		eryue = 28;
	}
	switch (month) {
		case 1: total = 0; break;

		case 2: total = yiyue; break;
		
		case 3: total = yiyue + eryue; break;
		
		case 4: total = yiyue + eryue + sanyue ; break;

		case 5: total = yiyue + eryue + sanyue + siyue ; break;
		
		case 6: total = yiyue + eryue + sanyue + siyue + wuyue ; break;

		case 7: total = yiyue + eryue + sanyue + siyue + wuyue + liuyue ; break;

		case 8: total = yiyue + eryue + sanyue + siyue + wuyue + liuyue + qiyue ; break;
		
		case 9: total = yiyue + eryue + sanyue + siyue + wuyue + liuyue + qiyue + bayue ; break;

		case 10: total = yiyue + eryue + sanyue + siyue + wuyue + liuyue + qiyue + bayue + jiuyue ; break;
		
		case 11: total = yiyue + eryue + sanyue + siyue + wuyue + liuyue + qiyue + bayue + jiuyue + shiyue ; break;
		
		case 12: total = yiyue + eryue + sanyue + siyue + wuyue + liuyue + qiyue + bayue + jiuyue + shiyue + shiyiyue ; break;
	}

	total = total + day;
	printf("这是今年的第%d天", total);

	return 0;
}