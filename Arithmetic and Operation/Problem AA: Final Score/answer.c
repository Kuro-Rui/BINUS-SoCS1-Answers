#include <stdio.h>

int main() {
    unsigned short T, Ut, Ua;
    scanf("%hu %hu %hu", &T, &Ut, &Ua);

    double final = T * 0.2 + Ut * 0.3 + Ua * 0.5;
    printf("%.2f\n", final);
    return 0;
}