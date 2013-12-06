#include <stdio.h>

int checkArray(int arrayNum[]) {
	char c;
	int i;
	int n;
	int abc;
	printf("你要输入几个数字给数组？\n");
	scanf("%d",&i);
	if(i <= 1) {
		printf("这个数组是非法的，数组最小应该有2个数才能比较\n");
		abc = 0;
	} else if(i >1000) {
		printf("超过了数组默认的最大长度，1000\n");
		abc = 0;
	} else {
			printf("输入%d个数字后，判断数组是否正序排列\n",i);
			for (int j =0; j < i; j++) {
				printf("请输入第%d个数字\n",j+1);
				scanf("%d", &arrayNum[j]);
			}
			for (int k = 0; k < i; k++) {
				if(arrayNum[k] > arrayNum[k+1]) {
					abc = 0;
					break;
				} else {
					abc =1;
					}
		 	}	
		 
		}
	return abc;
}