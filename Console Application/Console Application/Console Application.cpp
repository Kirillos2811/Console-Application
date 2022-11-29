#include <stdio.h>

int main(){	
	int pin1, pin2;
	printf("pin1 = ");
	scanf_s("%i", &pin1);
	printf("pin2 = ");
	scanf_s("%i", &pin2);
	int pass1 = 111;
	int pass2 = 222;
	if (pin1 == pass1 && pin2 == pass2) {
		printf("OK");
	}
	else {
		printf("ERROR");
	}
}

