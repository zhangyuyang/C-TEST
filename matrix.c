#include <stdio.h>
#include <stdbool.h>

int row;
int columns;

bool checkArray(int num) {
	if(num < 0) {
		printf("不支持负数\n");
		return true;
	} else {
		return false;
	}
}

void initArray(void) {
	do {
		printf("请输入矩阵的行\n");
		scanf("%d", &row);
		printf("请输入矩阵的列\n");
		scanf("%d" ,&columns);
	} while (checkArray(row) || checkArray(columns));
	printf("您输入的是一个%d行，%d列的一个矩阵\n", row,columns);	 
}

void changeArray(int array[row][columns]) {
	 for(int j = 0; j < columns; j++) {
	 	printf("翻转后第%d行为\n", j+1);
	 	for(int i = row-1; i >= 0; i--) {
	 		printf("%d", array[i][j]);
	 		if(i > 0){
	 			printf(",");
	 		}
	 	}
	 	printf("\n");
	}
}

int main() {
	initArray();
	int testArray[row][columns];
	for(int i = 0; i < row; i++) {
		for (int j = 0; j < columns; j++){
			printf("请输入第%d行，第%D个数字", i+1, j+1);
			scanf("%d", &testArray[i][j]);
		}
	}
	for(int i = 0; i < row; i++) {	
		printf("第%d行为：", i+1);
		for(int j = 0; j < columns; j++) {
			printf("%d", testArray[i][j]);
			if(j < columns - 1) {
				printf(",");
			}
		}
		printf("\n");
	}
	changeArray(testArray);//这里参数写数组名，不要写【】【】
	return 0;
}