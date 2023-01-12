#include <stdio.h>
#include <string>
#include <math.h>

float square_root(int a) {
    float l = 0;
    float r = 1e10;
    while (r - l > 1e-5) {
        float m = l + (r - l) / 2;
        if (m * m > a) {
            r = m;
        } 
        else if (m * m < a) {
            l = m;
        }
        else if (m * m == a) {
            return m;
        }
    }
    return l;
}

void square_root(int a, float* result) {
    float l = 0;
    float r = 1e10;
    while (r - l > 1e-5) {
        float m = l + (r - l) / 2;
        if (m * m > a) {
            r = m;
        }
        else if (m * m < a) {
            l = m;
        }
        else if (m * m == a) {
            *result = m;
        }
    }
    *result = l;
}

void square_root(int a, float &result) {
    float l = 0;
    float r = 1e10;
    while (r - l > 1e-5) {
        float m = l + (r - l) / 2;
        if (m * m > a) {
            r = m;
        }
        else if (m * m < a) {
            l = m;
        }
        else if (m * m == a) {
            result = m;
        }
    }
    result = l;
}

int main()
{   
    int a, b, c;
    printf("Enter the first number: ");
    scanf_s("%i", &a);

    printf("Enter the second number: ");
    scanf_s("%i", &b);

    printf("Enter the third number: ");
    scanf_s("%i", &c);

    float a_square_root = square_root(a);
    if (abs(a_square_root - round(a_square_root)) < 1e-4) {
        printf("Fisrt number has a natural square root\n");
    }
    else {
        printf("Fisrt number doesn't have a natural square root\n");
    }

    float b_square_root;
    square_root(b, &b_square_root);
    if (abs(b_square_root - round(b_square_root)) < 1e-4) {
        printf("Second number has a natural square root\n");
    }
    else {
        printf("Second number doesn't have a natural square root\n");
    }
   
    float c_square_root;
    square_root(c, c_square_root);
    if (abs(c_square_root - round(c_square_root)) < 1e-4) {
        printf("Third number has a natural square root\n");
    }
    else {
        printf("Third number doesn't have a natural square root\n");
    }

    return 0;
}

