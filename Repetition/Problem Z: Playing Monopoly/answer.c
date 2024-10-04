#include <stdio.h>

int main() {
    unsigned short N, k, position = 0, move[3][2] = {{12, 28}, {30, 10}, {35, 7}};
    scanf("%hu", &N);

    for (int i = 0; i < N; i++) {
        scanf("%hu", &k);
        position = (position + k) % 40;
        for (int j = 0; j < 3; j++) {
            if (position == move[j][0]) {
                position = move[j][1];
                break;
            }
        }
    }
    printf("%hu\n", position);
    return 0;
}