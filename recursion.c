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


 int recurrence(n) {
	 if(n == 0) {
	 	return 1;
	 } else {	
	 	if(n == 1) {
	 		return 1;
	 	} else {
	 		return (n * recurrence(n - 1));
	 	}
	 }
 }
 


int main() {
	int num;
	num = getNum();
	if(!checkNum(num)) {
		return 0;
	} else {
		num = recurrence(num);
	}
	printf("答案：阶乘为%d\n", num);
	return 1;
}
//聪聪啊，这个版本的阶乘是按照递归方法做出来的，但是我测试的时候发现，不如我原来写的那个好用。
//因为，这个版本我测试0-12的数都是正确的，测试到13的阶乘，就发现开始乱了，后面一直都是乱的，你看看是什么原因。