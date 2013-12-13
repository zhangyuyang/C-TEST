#include <stdio.h>
#include <stdbool.h>

int getNum() {
	int setNum;
	printf("请输入数字N，将会计算出N的阶乘\n");
	scanf("%d", &setNum);
	return setNum;
}

bool checkNum(int numb) {
	if(numb < 0) {
		printf("负数是没有阶乘的\n");
		return false;
	}
	if(numb > 20) {
		printf("最大只支持20的阶乘\n");
		return false;
	}
	return true;
}


 long recurrence(n) {
	 if(n == 0) {
	 	return 1;
	 } else {	
	 	if(n == 1) {
	 		return 1;
	 	} else {
	 		return n * recurrence(n - 1);
	 	}
	 }
 }
 


int main() {
	long num;
	num = getNum();
	if(!checkNum(num)) {
		return 0;
	} else {
		num = recurrence(num);
	}
	printf("答案：阶乘为%ld\n", num);
	return 1;
}
	