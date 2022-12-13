#include <stdio.h>

int main(){	
	int arr[100];
	int n;
	printf("Enter the amount of elements: ");
	scanf_s("%i", &n);
	printf("Enter the array:\n");
	for(int i = 0; i < n; i++) {
		scanf_s("%i", &arr[i]);
	}
	bool status = true;
	while (status) {
		status = false;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				status = true;
				int c = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = c;
			}
		}
	}
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++) {
		printf("%4i", arr[i]);
	}
}

