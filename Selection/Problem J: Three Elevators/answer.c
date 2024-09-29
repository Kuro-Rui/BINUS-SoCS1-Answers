#include <stdio.h>

int main() {
    short x, y, k;
    scanf("%hd %hd %hd", &x, &y, &k);
    
    short t1 = k - x;
    short t2 = y - k;
    if (t1 == t2 && t1 >= 0) printf("%hd\n", t1);
    else puts("-1");
    return 0;
}