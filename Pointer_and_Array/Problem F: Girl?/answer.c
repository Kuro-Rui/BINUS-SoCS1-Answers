#include <stdio.h>

int main() {
    unsigned short T;
    scanf("%hu", &T);

    char S[100001];
    for (int t = 1; t <= T; t++) {
        scanf("%100000s", S);
        unsigned short distinctCount = 0, charSeen[26] = {0};

        printf("Case #%d: ", t);
        for (int i = 0; S[i] != '\0'; i++) {
            unsigned short index = S[i] - 'a';
            if (!charSeen[index]) {
                charSeen[index] = 1;
                distinctCount++;
            }
        }
        puts(distinctCount % 2 ? "Ewwww" : "Yay");
    }
    return 0;
}