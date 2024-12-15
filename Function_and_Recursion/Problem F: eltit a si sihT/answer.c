#include <stdio.h>
#include <string.h>

// I prefer this, but the question asks for a recursive solution
// void reverseString(char str[]) {
//     unsigned short start = 0, end = strlen(str) - 1;
//     while (start < end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }

void reverseString(char str[], unsigned short start, unsigned short end) {
    if (start >= end) return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    unsigned short T;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        char S[1001];
        scanf(" %1000[^\n]", S);
        reverseString(S, 0, strlen(S) - 1);
        printf("Case #%d: %s\n", t, S);
    }
    return 0;
}