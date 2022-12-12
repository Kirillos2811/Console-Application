#include <stdio.h>

int main(){	
	int arr[7];
	printf("Enter the numbers:\n");
	for(int i = 0; i < 7; i++) {
		scanf_s("%i", &arr[i]);
	}
	printf("Entered numbers:\n");
	for (int i = 0; i < 7; i++) {
		printf("%i\n", arr[i]);
	}
}

