#include <stdio.h>

int main(int argc, char **argv) {
    
    while (1) {
        char str[100];
        fgets(str, sizeof(str), stdin);
        printf("%s\n", str);
    }

    return 0;
}