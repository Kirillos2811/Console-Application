#include <stdio.h>
#include <string>
#include <time.h>

void assign_values_and_print(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        arr[i] = rand();
    }

    for (int i = 0; i < len; i++) {
        printf("%i\n", arr[i]);
    }
}

int main()
{   
    int a[5];
    int b[10];

    srand(time(NULL));
    
    printf("Elements of array number 1:\n");
    assign_values_and_print(a, 5);

    printf("Elements of array number 2:\n");
    assign_values_and_print(b, 10);

    return 0;
}

