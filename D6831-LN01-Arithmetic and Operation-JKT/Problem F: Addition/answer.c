#include <stdio.h>

int main() {
    int num1, num2, answers[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d + %d =", &num1, &num2);
        answers[i] = num1 + num2;
    }
    for (int i = 0; i < 3; i++) printf("%d\n", answers[i]);
    return 0;
}