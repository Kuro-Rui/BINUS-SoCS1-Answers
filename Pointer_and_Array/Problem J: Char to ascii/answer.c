#include <stdio.h>

int main() {
    unsigned short T;
    char S[1001];
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%1000s", S);
        printf("Case %d: ", t);
        for (int i = 0; S[i] != '\0'; i++) {
            printf("%hu", S[i]);
            if (S[i + 1] != '\0') printf("-");
        }
        printf("\n");
    }
    return 0;
}