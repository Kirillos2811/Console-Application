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
	printf("Entered elements:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4i", arr[i][j]);
		}
		printf("\n");
	}
}

