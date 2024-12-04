#include <stdio.h>
#include <string.h>

int main() {
    unsigned short N, T;
    char names[100][41], trees[100][41];
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%hu", &N);

    for (int n = 0; n < N; n++) fscanf(fp, " %40[^#]#%40[^\n]", names[n], trees[n]);
    fscanf(fp, "%hu", &T);

    for (int t = 1; t <= T; t++) {
        char name[41];
        unsigned short found = 0;
        fscanf(fp, " %40[^\n]", name);
        printf("Case #%d: ", t);

        for (int i = 0; i < N; i++) {
            if (strcmp(name, names[i]) != 0) continue;
            printf("%s\n", trees[i]);
            found = 1;
            break;
        }
        if (!found) puts("N/A");
    }

    fclose(fp);
    return 0;
}