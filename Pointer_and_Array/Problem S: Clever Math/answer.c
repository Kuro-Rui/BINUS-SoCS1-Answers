#include <stdio.h>
#include <string.h>

int main() {
    unsigned short T;
    char A[8], B[8];
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%7s %7s", A, B);
        unsigned short lenA = strlen(A), lenB = strlen(B), maxLength = lenA > lenB ? lenA : lenB;

        char result[maxLength + 1];
        result[maxLength] = '\0';
        for (int i = 0; i < maxLength; i++) {
            unsigned short digitA = (lenA - 1 - i >= 0) ? A[lenA - 1 - i] - '0' : 0;
            unsigned short digitB = (lenB - 1 - i >= 0) ? B[lenB - 1 - i] - '0' : 0;
            result[maxLength - 1 - i] = (digitA + digitB) % 10 + '0';
        }

        unsigned short startIndex = 0;
        while (startIndex < maxLength && result[startIndex] == '0') startIndex++;
        if (startIndex == maxLength) startIndex--;
        printf("Case #%d: %s\n", t, result + startIndex);
    }
    return 0;
}