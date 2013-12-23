#include <stdio.h>
#include <string.h>

int main(void) {
	size_t a = -1;
	a = a >>1;
	printf("%ld\n", a);
	int arr1[100], arr2[100];
	for (int i = 0; i < 100; ++i) {
		arr1[i] = 0;
		arr2[i] = 0;
	}
	arr1[1] = 1;
	for (int i = 1; i < 11; ++i) {
		
		for (int j = 1; j < i + 1; ++j) {
			printf("%4d", arr1[j]);
		}
		printf("\n");

		for (int j = 1; j < i + 2; ++j) {
			arr2[j] = arr1[j-1] + arr1[j];
		}
		memcpy(arr1, arr2, sizeof(arr1));
	}

	return 0;
}

// sizeof(arr1) < sizeof(arr2) ? sizeof(arr1) : sizeof(arr2) 

// #include <stdio.h>

// int main(void) {
// 	int arr[100][100];
// 	for (int i = 0; i < 100; ++i) {
// 		arr[0][i] = 0;
// 	}
// 	arr[0][1] = 1;

// 	for (int i = 1; i < 11; ++i) {
// 		for (int j = 1; j < i + 2; ++j) {
// 			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
// 		}
// 	}

// 	for (int i = 0; i < 11; ++i) {
// 		for (int j = 1; j< 12; ++j) {
// 			printf("%4d", arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


// #include <stdio.h>

// int main() {
// 	int b[100];
// 	for (int i = 1; i <= 5; i++) {
// 		int a[i];
// 		if (i == 1) {
// 			printf("1,\n");
// 		} else if (i == 2) {
// 			a[0] = 1;
// 			a[1] = 1;
// 			printf("%10d%10d\n", a[0], a[1]);
// 		} else {
// 			for (int k = 0; k < i; k++) {
// 				b[k] = a[k];
// 				if (k == 0 || k == i-1) {
// 					a[k] = 1;
// 				} else {
// 					a[k] = b[k - 1] + a[k];
					
// 				}
					
// 					printf("%10d", a[k]);
// 		   }
// 		   printf("\n");
// 		}

		
// 	}
// 	return 0;
// }

