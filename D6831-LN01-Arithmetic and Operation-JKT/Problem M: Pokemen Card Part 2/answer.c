#include <stdio.h>

int main() {
    unsigned int X, Y;
    scanf("%u %u", &X, &Y);
    printf("%.2f%%\n", (double)X / Y * 100);
    return 0;
}