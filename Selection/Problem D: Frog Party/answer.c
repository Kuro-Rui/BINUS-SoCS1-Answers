#include <stdio.h>

int main() {
    unsigned short T;
    unsigned int N, M;
    scanf("%hu", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%u %u", &N, &M);
        printf("Case #%d: ", i);
        if ((unsigned long long)N * M % 2) puts("Need more frogs");
        else puts("Party time!");
    }
    return 0;
}