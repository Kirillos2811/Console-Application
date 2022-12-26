#include <stdio.h>

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

	bool flag;
	for (int i = 0; i < n; i++) {
		flag = true;
		while(flag) {
			flag = false;
			for (int j = 0; j < m - 1; j++) {
				if (arr[i][j] > arr[i][j + 1]) {
					flag = true;
					int buff = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buff;
				}
			}
		}
	}

	printf("Sorted array:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4i", arr[i][j]);
		}
		printf("\n");
	}
}

