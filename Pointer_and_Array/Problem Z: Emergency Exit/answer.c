// WARNING: THIS CODE IS STILL WRONG
#include <stdio.h>

int main() {
    unsigned short T, N, K;
    scanf("%hu", &T);
    
    for (int t = 1; t <= T; t++) {
        scanf("%hu %hu", &N, &K);

        char plots[N + 1];
        scanf("%s", plots);
        printf("Case #%d: ", t);
        
        short breathsLeft = K;
        unsigned short onSecondFloor = 0, alive = 1;
        for (int i = 0; i < N; i++) {
            if (!onSecondFloor) breathsLeft--;
            if (breathsLeft < 0) {
                alive = 0;
                break;
            }
            if (plots[i] == '1') {
                if (!onSecondFloor) onSecondFloor = 0;
                else {
                    onSecondFloor = 1;
                    breathsLeft = K;
                }
            }
        }
        puts(alive ? "Alive" : "Dead");
    }
    return 0;
}