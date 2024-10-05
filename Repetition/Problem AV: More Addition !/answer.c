#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);  

    unsigned int combinations = (N + 1) * (N + 2) / 2;
    printf("%u\n", combinations);  
    return 0;
}
