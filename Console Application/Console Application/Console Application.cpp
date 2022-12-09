#include <stdio.h>

int main(){	
	int min, max, n;
	float num;
	float sum = 0;
	printf("Numbers amount? ");
	scanf_s("%f", &num);
	scanf_s("%i", &n);
	sum += n;
	min = n;
	max = n;

	for (int i = 0; i < num-1; i++) {
		scanf_s("%i", &n);
		if (n < min) {
			min = n;
		}
		if (n > max) {
			max = n;
		}
		sum += n;
	}
	printf("Max: %i\n", max);
	printf("Min: %i\n", min);
	printf("Sum: %f\n", sum);
	printf("Average: %f", sum / num);
}

