#include <stdio.h>

typedef struct {
    unsigned short wins;
    char* name;
} Player;

int main() {
    unsigned short T, N;
    scanf("%hu", &T);

    for (int i = 0; i < T; i++) {
        scanf("%hu", &N);
        getchar();

        char S[N + 1];
        scanf("%[^\n]", S);

        Player players[2] = {{0, "Bibi"}, {0, "Lili"}};
        for (int j = 0; S[j] != '\0'; j++) {
		    if (S[j] == 'B') players[0].wins++;
            else if (S[j] == 'L') players[1].wins++;
            else continue;
        }
        if (players[0].wins > players[1].wins) printf("%s\n", players[0].name);
        else if (players[1].wins > players[0].wins) printf("%s\n", players[1].name);
        else puts("None");
    }
    return 0;
}