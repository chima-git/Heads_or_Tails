#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    srand(time(NULL));

    char name[100];
    printf("Who are you? \n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    const char* results[3];
    int hcount = 0;
    int tcount = 0;

    for (int i = 0; i < 3; i++) {
        results[i] = coin_toss();
        if (results[i][0] == 'H') {
            hcount++;
        } else {
            tcount++;
        }
        printf("Round %d: %s\n", i + 1, results[i]);
    }

    printf("Heads: %d, Tails: %d\n", hcount, tcount);

    return 0;
}