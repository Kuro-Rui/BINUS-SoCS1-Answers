#include <stdio.h>

int main() {
    unsigned short X, Y;
    for (int i = 0; i < 4; i++) {
        scanf("%hu %hu", &X, &Y);
        printf("%u\n", X * Y);
    }
    return 0;
}