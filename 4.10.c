#include <stdio.h>

double money1(double money) {    //一级分润
	double resultMoney;
	resultMoney = money * 0.1;
	return resultMoney;
}

double money2(double money) {   //二级分润
	double resultMoney;
	resultMoney = money * 0.075;
	return resultMoney;
}

double money3(double money) {   //三级分润
	double resultMoney;
	resultMoney = money * 0.05;
 	return resultMoney;
}

double money4(double money) {   //四级分润
	double resultMoney;
	resultMoney = money * 0.03;
	return resultMoney;
}

double money5(double money) {   //五级分润
	double resultMoney;
	resultMoney = money * 0.015;
	return resultMoney;
}


double money6(double money) {   //六级分润
	double resultMoney;
	resultMoney = money * 0.01;
	return resultMoney;
}

int selectRich(double money) {
	double lastMoney;
	if(money > 0 && money <= 100000) {
		lastMoney = money1(money);
	} else if (money > 100000 && money <= 200000) {
		lastMoney = money2(money - 100000) + money1(100000);
	} else if (money > 200000 && money <= 400000) {
		lastMoney = money3(money - 200000) + money2(money - 100000) + money1(100000);
	} else if (money > 400000 && money <= 600000) {
		lastMoney = money4(money - 400000) + money3(money - 200000) + money2(money - 100000) + money1(100000);
	} else if (money > 600000 && money <= 1000000) {
		lastMoney = money5(money - 600000) + money4(money - 400000) + money3(money - 200000) + money2(money - 100000) + money1(100000);
	} else if (money > 1000000) {
		lastMoney = money6(money - 1000000) + money5(money - 600000) + money4(money - 400000) + money3(money - 200000) + money2(money - 100000) + money1(100000);
	}
	return lastMoney;
}

int main() {
	double richMoney;
	double finallyMoney;
	printf("请输入利润\n");
	scanf("%lf", &richMoney);
	printf("利润为%lf\n", richMoney);
	finallyMoney = selectRich(richMoney);
	printf("最终的奖金为%lf\n", finallyMoney);
	return 0;
}