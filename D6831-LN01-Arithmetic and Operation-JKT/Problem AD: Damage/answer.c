#include <stdio.h>

int main() {
    unsigned short Ph, M, Pu;
    scanf("%hu %hu %hu", &Ph, &M, &Pu);

    double total = Ph * 0.2 + M * 0.3 + Pu * 0.5;
    printf("%.2f\n", total);
    return 0;
}