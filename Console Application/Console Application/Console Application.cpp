#include <stdio.h>
#include <string>

int main()
{
    char str[100];
    gets_s(str);
    printf("Second element of the string:%c", str[1]);
}

