#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;


    scanf("%f %f %f", &a, &b, &c);


    if (b > a) {
        float temp = a; a = b; b = temp;
    }
    if (c > a) {
        float temp = a; a = c; c = temp;
    }
    if (c > b) {
        float temp = b; b = c; c = temp;
    }


    if (a >= b + c || a <= 0 || b <= 0 || c <= 0) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
        printf("TRIANGULO RETANGULO\n");
    } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || a == c || b == c) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
