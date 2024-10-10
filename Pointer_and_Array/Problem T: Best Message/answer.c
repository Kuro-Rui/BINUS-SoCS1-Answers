#include <stdio.h>

char nearestVowel(char c) {
    if (c >= 'A' && c <= 'D') return 'A';
    if (c >= 'E' && c <= 'H') return 'E';
    if (c >= 'I' && c <= 'N') return 'I';
    if (c >= 'O' && c <= 'T') return 'O';
    if (c >= 'U' && c <= 'Z') return 'U';
    return c;
}

int main() {
    unsigned short T;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        char message[1001];
        unsigned short key[1001];
        scanf("%1000s", message);
        printf("Case #%d:\n", t);

        for (int i = 0; message[i] != '\0'; i++) {
            key[i] = message[i] - nearestVowel(message[i]);
            message[i] = nearestVowel(message[i]);
        }
        printf("%s\n", message);
        for (int i = 0; message[i] != '\0'; i++) printf("%hu", key[i]);
        printf("\n");
    }
    return 0;
}