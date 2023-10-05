#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	double t = 0;
	int i, j, counter = 0;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		t += arr[i];
		printf("%d ", arr[i]);
	}
	double avr = t / (sizeof(arr) / sizeof(int));
	printf("\nAvarage: %lf\n", avr);

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] > avr) {
			counter++;
			printf("%d ", arr[i]);
		}
	}

	printf("\nCounter: %d", counter); // Закончили 1-ю часть


	//-----------------------------//


	counter = 0;
	int newArr[] = { 1, -2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, -13, 14, 15, 16, 17, 18, 19, 20 };

	printf("\n\nTASK2\n");

	for (i = 0; i < sizeof(newArr) / sizeof(int); i++) {
		if ((newArr[i] < 0) && (newArr[i+1])) {
			printf("\nnegative: %d\n", arr[i]);
			for (j = i + 1; j < sizeof(newArr) / sizeof(int); j++) {
				counter += abs(newArr[j]);
				printf("%d ", newArr[j]);
			}
			break;
		}
	}

	printf("Sum of abs: %d", counter);

	return 0;
}
