#include <stdio.h>

int stringToint(char numberString[]) {
	int returnInt = 0;
	int temp = 1;
	for (int i = 99; i >= 0; --i)
	{
		if (numberString[i] != 0)
		{
			returnInt += (numberString[i] - 48) * temp;
			temp *= 10;
		}
	}
	return returnInt;
}

int main() {
	char message[100];
	for(int k = 0; k < 100; k++){
		message[k] = 0;
	}
	int c = 0;
	int i = 0;
	int sign = 0;
	int centreNumber = 0;
	char front[100];
	for(int k = 0; k < 100; k++){
		front[k] = 0;
	}
	char after[100];
	for(int k = 0; k < 100; k++){
		after[k] = 0;
	}
	int resultNumber = 0;
	printf("请输入需要计算的表达式：例 数A * 数B\n");
	while((c = getchar()) != '\n') {        //明天这里用char类型来接受getchar，试试能否简化程序
		if(c == 42 || c == 43 || c == 45 || (c >= 47 && c<= 57)) {
			message[i] = (char)c;
			i++;
		} else {
			printf("只支持数字和加减乘除符号\n");
			return -1;
		}
	}
	for(int z = 0; z < i; z++) {
		switch(message[z]) {
			case '+':sign = 1; centreNumber = z; break;
			case '-':sign = 2; centreNumber = z; break;
			case '*':sign = 3; centreNumber = z; break;
			case '/':sign = 4; centreNumber = z; break;
		}
	}
	for(int q = 0; q <= centreNumber-1; q++) {
		front[q] = message[q];
	}
	for(int q = 0; q < i - centreNumber-1; q++) {
		after[q] = message[centreNumber+1+q];
	}
	switch(sign) {
			case 1:resultNumber = stringToint(front) + stringToint(after); break;
			case 2:resultNumber = stringToint(front) - stringToint(after); break;
			case 3:resultNumber = stringToint(front) * stringToint(after); break;
			case 4:resultNumber = stringToint(front) / stringToint(after); break;
		}
	printf("结果是%d\n", resultNumber);

}
