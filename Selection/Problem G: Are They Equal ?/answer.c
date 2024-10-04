#include <stdio.h>

int main() {
    unsigned int a, b, c, d;
    scanf("%u %u %u %u", &a, &b, &c, &d);

    puts((unsigned long long)a * b == c - d ? "True" : "False");
    return 0;
}