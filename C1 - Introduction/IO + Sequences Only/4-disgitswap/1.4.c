#include <stdio.h>
void main() {
    int x;
    scanf("%d", &x);
    printf("%d", ((x%10)*10)+(x/10));
}