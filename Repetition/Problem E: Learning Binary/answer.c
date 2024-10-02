#include <stdio.h>

int main() {
    unsigned short T, P;
    unsigned int X;
    scanf("%hu", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%u %hu", &X, &P);
        unsigned int bit = (X >> P) & 1;
        printf("%u\n", bit);
    }
    return 0;
}