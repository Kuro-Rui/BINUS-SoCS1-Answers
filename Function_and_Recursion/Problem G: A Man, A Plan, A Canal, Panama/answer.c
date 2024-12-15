#include <stdio.h>
#include <string.h>

// I prefer this, but the question asks for a recursive solution
// unsigned short isPalindrome(char str[]) {
//     unsigned short length = strlen(str);
//     for (int i = 0; i < length / 2; i++) if (S[i] != S[length - i - 1]) return 0;
//     return 1;
// }

unsigned short isPalindrome(char str[], unsigned short start, unsigned short end) {
    if (start >= end) return 1;
    if (str[start] != str[end]) return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    unsigned short T;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        char S[1001];
        scanf(" %1000s", S);
        printf("Case #%d: %s\n", t, isPalindrome(S, 0, strlen(S) - 1) ? "yes" : "no");
    }
    return 0;
}