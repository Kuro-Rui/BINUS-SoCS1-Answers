#include <stdio.h>
#include <ctype.h>

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);
        getchar();

        char S[N + 1];
        scanf("%[^\n]", S);
        printf("Case #%d: ", t);

        for (int i = 0; S[i] != '\0'; i++) if (isalpha(S[i])) printf("%c", S[i]);
        printf("\n");
    }
}