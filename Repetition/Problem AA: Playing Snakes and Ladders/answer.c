#include <stdio.h>

int main() {
    unsigned short N;
    scanf("%hu", &N);
    
    unsigned short k[N];
    for (int i = 0; i < N; i++) scanf("%hu", &k[i]);

    unsigned short position = 0;
    unsigned short ladders[3][2] = {{9, 21}, {33, 42}, {76, 92}};
    unsigned short snakes[3][2] = {{53, 37}, {80, 59}, {97, 88}};
    for (int i = 0; i < N; i++) {
        position += k[i];
        if (position > 30000) position = 30000;
        for (int j = 0; j < 3; j++) {
            if (position == ladders[j][0]) {
                position = ladders[j][1];
                break;
            }
            else if (position == snakes[j][0]) {
                position = snakes[j][1];
                break;
            }
        }
    }

    printf("%hu\n", position);
    return 0;
}