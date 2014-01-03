#include <stdio.h>

float average(int *p1, int *p2, int *p3, int *p4) {
	return (*p1 + *p2 + *p3 + *p4) / 4;
}

int fail(int *p) {
	int noFail = 0;
	for (int i = 0; i < 5; ++i)
	{
		if(*(p+i) < 60) {
			noFail++;
		} 
	}
	if(noFail >= 2) {
		return 0;//0代表不及格
	} else 
		return 1;
}

int outstanding(int *p) {
	int isOutstanding = 0;
	int goodClass = 0;
	for (int i = 0; i < 5; ++i)
	{
		if(*(p+i) >= 85) 
			goodClass++;
	}
	if (goodClass == 5) 
		return 1;
	else if(*p + *(p+1) + *(p+2) + *(p+3) + *(p+4)  >= 425) {
		return 1;
	} else 
		return 0;
}

int main() {
	int a[5];
	int b[5];
	int c[5];
	int d[5];
	printf("给第一个学生输入成绩\n");
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &a[i]);
	}
	printf("给第二个学生输入成绩\n");
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &b[i]);
	}
	printf("给第三个学生输入成绩\n");
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &c[i]);
	}
	printf("给第四个学生输入成绩\n");
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &d[i]);
	}
	int *p1 = a;
	int *p2 = b;
	int *p3 = c;
	int *p4 = d;
	float averageNum = 0;
	averageNum = average(p1,p2,p3,p4); 
	printf("第一门课程的平均分是%2f\n", averageNum);

	int failFlag = 1;
	failFlag = fail(p1);
	if(failFlag == 0) {
		printf("A不及格\n");
	} 
	failFlag = fail(p2);
	if(failFlag == 0) {
		printf("B不及格\n");
	} 
	failFlag = fail(p3);
	if(failFlag == 0) {
		printf("C不及格\n");
	} 
	failFlag = fail(p4);
	if(failFlag == 0) {
		printf("D不及格\n");
	} 
	int outstandingNum = 1;
	outstandingNum = outstanding(p1);
	if(outstandingNum == 1) 
	printf("A是好学生\n");
	outstandingNum = outstanding(p2);
	if(outstandingNum == 1) 
		printf("B是好学生\n");
	outstandingNum = outstanding(p3);
	if(outstandingNum == 1) 
		printf("C是好学生\n");
	outstandingNum = outstanding(p4);
	if(outstandingNum == 1) 
		printf("D是好学生\n");
	return 0;
}