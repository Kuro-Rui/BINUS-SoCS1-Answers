#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);

    unsigned int animalsInCage, animals = 0;
    for (int i = 0; i < N; i++) {
        scanf("%u", &animalsInCage);
        animals += animalsInCage;
    }
    printf("%u\n", animals);
    return 0;
}