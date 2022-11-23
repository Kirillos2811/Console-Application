#include <stdio.h>

int main(){	
	int a, b;
	printf("a = ");
	scanf_s("%i", &a);
	printf("b = ");
	scanf_s("%i", &b);
	if (a == b) {
		printf("Equal");
	}
	else {
		if (a > b) {
			printf("Bigger");
		}
		else {
			printf("Smaller");
		}
	}
}

