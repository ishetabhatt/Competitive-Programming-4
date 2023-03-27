#include <stdio.h>

void main() {
    int x, y; char str[100];
    scanf("%d %d", &x, &y);
    for(int i = 0; i < x; i++) {
        fgets(str, 100, stdin);
    }
    printf("%d", y);
}