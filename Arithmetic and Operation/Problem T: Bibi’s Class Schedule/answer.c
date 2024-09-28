#include <stdio.h>

int main() {
    char courseCode[11];
    unsigned short startHour, startMinute, endHour, endMinute;
    for (int i = 0; i < 5; i++) {
        scanf("%s %hu:%hu-%hu:%hu", courseCode, &startHour, &startMinute, &endHour, &endMinute);
        printf("%s %02hu:%02hu-%02hu:%02hu\n", courseCode, startHour - 1, startMinute, endHour - 1, endMinute);
    }
    return 0;
}