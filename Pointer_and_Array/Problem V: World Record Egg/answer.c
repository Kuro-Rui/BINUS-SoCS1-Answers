#include <stdio.h>

int main() {
    unsigned short T, N;
    unsigned long long likes[90];
    likes[0] = 0;
    likes[1] = 1;
    for (int i = 2; i < 90; i++) likes[i] = likes[i - 1] + likes[i - 2];
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%hu", &N);
        printf("Case #%d: %llu\n", t, likes[N - 1]);
    }
    return 0;
}