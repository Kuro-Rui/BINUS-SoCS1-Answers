#include <stdio.h>

int main() {
    unsigned int A, B;
    scanf("%u %u", &A, &B);
    printf("%.4f%%\n", (double)B / A * 100.0);
    return 0;
}