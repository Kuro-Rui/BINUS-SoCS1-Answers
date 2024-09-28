#include <stdio.h>

int main() {
    unsigned int A, B;
    scanf("%u %u", &A, &B);
    printf("%.2f%%\n", (1 - (double)B / A) * 100);
    return 0;
}