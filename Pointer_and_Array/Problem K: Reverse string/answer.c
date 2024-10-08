#include <stdio.h>
#include <string.h>

int main() {
    unsigned short N;
    char S[1001];
    scanf("%hu", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%1000s", S);
        printf("Case #%d : ", i);
        
        for (int j = strlen(S) - 1; j >= 0; j--) printf("%c", S[j]);
        printf("\n");
    }
    return 0;
}