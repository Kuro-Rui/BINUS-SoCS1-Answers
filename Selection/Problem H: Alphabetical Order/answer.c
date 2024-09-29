#include <stdio.h>

int main() {
    char blocks[3];
    unsigned short positions[3] = {1, 2, 3};
    scanf("%c %c %c", &blocks[0], &blocks[1], &blocks[2]);

    // Bubble Sort
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (blocks[i] > blocks[j]) {
                char tempBlock = blocks[i];
                blocks[i] = blocks[j];
                blocks[j] = tempBlock;

                unsigned short tempPos = positions[i];
                positions[i] = positions[j];
                positions[j] = tempPos;
            }
        }
    }
    printf("%hu %hu %hu\n", positions[0], positions[1], positions[2]);
    return 0;
}