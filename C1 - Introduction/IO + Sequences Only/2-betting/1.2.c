#include <stdio.h>

void main() {
    float x;
    scanf("%f", &x);
    printf("%f %f", 100/x, 100/(100-x));
}