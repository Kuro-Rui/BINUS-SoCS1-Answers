#include <stdio.h>

int main() {
    unsigned short N;
    unsigned int animals = 0;
    scanf("%hu", &N);

    for (int i = 0; i < N; i++) {
        unsigned int temp;
        scanf("%u", &temp);
        animals += temp;
    }
    printf("%u\n", animals);
    return 0;
}