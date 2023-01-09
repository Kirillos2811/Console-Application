#include <stdio.h>
#include <string>

int main()
{
    char str[100];
    printf("Enter a string:");
    gets_s(str);
    printf("Input string:");
    puts(str);

    int str_len = strlen(str);
    for (int i = 0; i < str_len; i++) {
        str[i] = str[i + 1];
    }

    printf("Output string:");
    puts(str);
}

