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
	srand((unsigned int) time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand()%(7-(-2)+1)+(-2);
		}
	}
	printf("Random elements of the array:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4i", arr[i][j]);
		}
		printf("\n");
	}
}

