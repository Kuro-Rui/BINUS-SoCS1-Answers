#include <stdio.h>

int main() {
    unsigned int a, b, c, d;
    scanf("%u %u %u %u", &a, &b, &c, &d);

    if ((long long)a * b == c - d) puts("True");
    else puts("False");
    return 0;
}