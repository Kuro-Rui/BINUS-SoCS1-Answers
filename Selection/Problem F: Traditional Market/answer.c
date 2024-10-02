#include <stdio.h>

typedef struct {
    unsigned int budget;
    char* label;
} Item;

int main() {
    unsigned int d, s, t;
    scanf("%u %u %u", &d, &s, &t);
    Item items[3] = {{d, "Daging"}, {s, "Sayur"}, {t, "Telur"}};

    // Bubble Sort
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (items[i].budget < items[j].budget) {
                Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) printf("%s\n", items[i].label);
    return 0;
}