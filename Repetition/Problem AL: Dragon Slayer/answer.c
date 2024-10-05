#include <stdio.h>

int main() {
    unsigned int N, M, X, Y, Xmax = 0, Ymax = 0;
    scanf("%u %u", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%u", &X);
        if (X > Xmax) Xmax = X;
    }
    for (int i = 0; i < M; i++) {
        scanf("%u", &Y);
        if (Y > Ymax) Ymax = Y;
    }
    puts(Xmax > Ymax ? "The dark secret was true" : "Secret debunked");
    return 0;
}