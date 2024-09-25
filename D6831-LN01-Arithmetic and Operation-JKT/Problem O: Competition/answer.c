#include <stdio.h>

int main() {
    unsigned short X, Y;
    unsigned int answers[4];
    for (int i = 0; i < 4; i++) {
        scanf("%hu %hu", &X, &Y);
        answers[i] = X * Y;
    }
    for (int i = 0; i < 4; i++) printf("%u\n", answers[i]);
    return 0;
}