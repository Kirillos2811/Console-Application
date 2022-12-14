#include <stdio.h>

int main(){	
	int arr[100];
	int n, max, min, sum;
	float average;
	printf("Enter the amount of elements: ");
	scanf_s("%i", &n);
	printf("Enter the array:\n");
	for(int i = 0; i < n; i++) {
		scanf_s("%i", &arr[i]);
	}
	max = min = arr[0];
	sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}
	average = (float)sum / (float)n;
	printf("Min = %i; max = %i; sum = %i; average = %f", min, max, sum, average);
}

