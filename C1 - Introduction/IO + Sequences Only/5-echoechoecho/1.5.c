#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == '\n')
            str[i] = ' ';
    }
    printf("%s %s %s", str, str, str);
}