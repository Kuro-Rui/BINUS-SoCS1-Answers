#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned short T, N;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%hu", &T);

    for (int t = 1; t <= T; t++) {
        fscanf(fp, "%hu", &N);

        unsigned short X[N], sum = 0;
        for (int i = 0; i < N; i++) {
            fscanf(fp, "%hu", &X[i]);
            sum += X[i];
        }

        unsigned short area = sum * 4;
        unsigned short perimeter = 2 * (N + N + X[0] + X[N - 1]);
        for (int i = 0; i < N - 1; i++) perimeter += 2 * abs(X[i] - X[i + 1]);
        printf("Case #%d: %hu %hu\n", t, perimeter, area);
    }

    fclose(fp);
    return 0;
}