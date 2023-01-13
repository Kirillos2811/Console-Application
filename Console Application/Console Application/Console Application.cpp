#include <stdio.h>
#include <string>

void change_chars_in_string() {
    char str[100];
    char symb;

    printf("Enter a string:");
    gets_s(str);
    printf("Enter a symbol:");
    scanf_s("%c", &symb, 1);

    int len = strlen(str);
    str[0] = symb;
    str[len - 1] = symb;
    
    printf("Output string:");
    puts(str);
}

int main()
{  
    change_chars_in_string();
}

