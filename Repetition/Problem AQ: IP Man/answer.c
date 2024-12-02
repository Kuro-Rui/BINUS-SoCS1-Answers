#include <stdio.h>
#include <ctype.h>

int main() {
    unsigned short T;
    char S[101];
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        unsigned short valid = 1, dots = 0;
        scanf(" %100[^\n]", S);
        printf("Case #%d: ", t);

        for (int i = 0; S[i] != '\0'; i++) {
            if (S[i] == '.') {
                if (S[i + 1] == '.') {
                    valid = 0;
                    break;
                }
                dots++;
            }
            else if (S[i] < '0' || S[i] > '9') {
                valid = 0;
                break;
            }
        }
        puts((valid && dots == 5) ? "YES" : "NO");
    }
    return 0;
}