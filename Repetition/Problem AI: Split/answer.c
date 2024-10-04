#include <stdio.h>

int main() {
    unsigned short T;
    unsigned int N;
    scanf("%hu", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%u", &N);
        short numbers[N];
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%hd", &numbers[i]);
            sum += numbers[i];
        }

        long long leftSum = 0;
        unsigned short same = 0;
        for (int i = 0; i < N; i++) {
            if (leftSum == sum - leftSum) {
                same = 1;
                break;
            }
            leftSum += numbers[i];
        }
        printf("Case #%d: %s\n", t, same ? "Yes" : "No");
    }
    return 0;
}