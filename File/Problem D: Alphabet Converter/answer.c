#include <stdio.h>

int main(){
    unsigned short T;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%hu", &T);

    for (int i = 0; i < T; i++) {
        // The characters in the X string consist of the alphabet which is uppercase letters.
        char X[101];
        fscanf(fp, " %100[^\n]", X);

        unsigned short N;
        fscanf(fp, "%hu", &N);

        unsigned short check[26] = {0};
        for (int j = 0; j < N; j++) {
            char A, B;
            fscanf(fp, " %c %c", &A, &B);

            if (check[A - 'A']) continue;
            for (int k = 0; X[k] != '\0'; k++) if (X[k] == A) X[k] = B;
            check[A - 'A'] = 1;
        }

        unsigned short counter[26] = {0};
        for (int j = 0; X[j] != '\0'; j++) counter[X[j] - 'A']++;
        for (int j = 0; j < 26; j++) if (counter[j] != 0) printf("%c %d\n", 'A' + j, counter[j]);
    }

    fclose(fp);
    return 0;
}