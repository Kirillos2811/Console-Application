#include <stdio.h>
#include <string>

int main()
{
	std::system("chcp 1251");
	int amount;
	char surnames[100][100];

	printf("Enter the amount of surnames:\n");
	scanf_s("%i\n", &amount);
	
	for (int i = 0; i < amount; i++) {
		gets_s(surnames[i]);
	}

	for (int j = 0; j < amount; j++) {
		bool flag = false;
		for (int i = 0; i < amount - 1; i++) {
			if ((int)surnames[i][0] > (int)surnames[i + 1][0]) {
				flag = true;
				char buff[100];
				strcpy_s(buff, surnames[i]);
				strcpy_s(surnames[i], surnames[i + 1]);
				strcpy_s(surnames[i + 1], buff);
			}
		}
		if (!flag) {
			break;
		}
	}

	printf("Sorted surnames:\n");
	for (int i = 0; i < amount; i++) {
		puts(surnames[i]);
	}

	return 0;
}

