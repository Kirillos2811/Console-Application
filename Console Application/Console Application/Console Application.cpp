#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){	
	int arr[100][100];
	int n, m;

	printf("Enter the amount of rows: ");
	scanf_s("%i", &n);

	printf("Enter the amount of columns: ");
	scanf_s("%i", &m);

	printf("Enter the elements:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%i", &arr[i][j]);
		}
	}

	printf("Entered array:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4i", arr[i][j]);
		}
		printf("\n");
	}
	int temp_m = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < temp_m; j++) {
			if (i != j) {
				int buff = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = buff;
			}
		}
		temp_m++;
	}

	printf("Inversed array:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4i", arr[i][j]);
		}
		printf("\n");
	}
}

