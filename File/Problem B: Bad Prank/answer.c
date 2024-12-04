#include <ctype.h>
#include <stdio.h>
#include <string.h>

char reverseShift(char c, int k) {
    if (!isalpha(c)) return c;

    char base = isupper(c) ? 'A' : 'a';
    return ((c - base - k + 26) % 26) + base;
}

char convert(char c) {
    switch (c) {
        case '0': return 'O';
        case '1': return 'I';
        case '3': return 'E';
        case '4': return 'A';
        case '5': return 'S';
        case '6': return 'G';
        case '7': return 'T';
        case '8': return 'B';
        default: return c;
    }
}

int main() {
    unsigned short T, K;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%hu", &T);

    char S[1001];
    for (int t = 1; t <= T; t++) {
        fscanf(fp, "%hu", &K);
        fscanf(fp, " %1000[^\n]", S);

        for (int i = 0; S[i] != '\0'; i++) S[i] = reverseShift(convert(S[i]), K);
        printf("Case #%d: %s\n", t, S);
    }

    fclose(fp);
    return 0;
}