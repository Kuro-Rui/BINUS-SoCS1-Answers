#include <stdio.h>

typedef struct {
    unsigned short score;
    char* name;
} Participant;

int main() {
    unsigned short N;
    scanf("%hu", &N);
    unsigned short totalParticipants = N + 3;

    unsigned short jojo, lili, bibi;
    scanf("%hu %hu %hu", &jojo, &lili, &bibi);
    unsigned short totalScore = jojo + lili + bibi;
    Participant jolibi[3] = {{jojo, "Jojo"}, {lili, "Lili"}, {bibi, "Bibi"}};

    unsigned short score;
    for (int i = 0; i < N; i++) {
        scanf("%hu", &score);
        totalScore += score;
    }

    double average = (double)totalScore / totalParticipants;
    for (int i = 0; i < 3; i++) {
        if (jolibi[i].score >= average) printf("%s lolos", jolibi[i].name);
        else printf("%s tidak lolos", jolibi[i].name);
    }
    return 0;
}