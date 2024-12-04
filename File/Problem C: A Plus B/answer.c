#include <stdio.h>

int main(){
    unsigned short A, B;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%hu %hu", &A, &B);
    printf("%hu\n", A + B);
    fclose(fp);
    return 0;
}