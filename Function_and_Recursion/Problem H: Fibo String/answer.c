#include <stdio.h>
#include <string.h>

void printFiboString(unsigned short n, char s0, char s1) {
    // F[16] = 987
    char strings[16][988];
    strings[0][0] = s0;
    strings[1][0] = s1;

    // Don't worry, this loop will not run if n < 2
    for (int i = 2; i <= n; i++) {
        strcpy(strings[i], strings[i - 1]);
        strcat(strings[i], strings[i - 2]);
    }
    printf("%s\n", strings[n]);
}

int main() {
    unsigned short T, n;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        char s0, s1;
        scanf("%hu %c %c", &n, &s0, &s1);
        printf("Case #%d: ", t);
        printFiboString(n, s0, s1);
    }
    return 0;
}