#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    
    int coins[5] = {25, 10, 5, 2, 1};
    int sum = 0;
    int money;
    int i;

    if (argc != 2) {
        printf("Error\n");
        return (1);
    }

    money = atoi(argv[1]);

    for (; money > 0;) {
        for (i = 0; i < 5; i++) {
            if (money - coins[i] > 0 || money % coins[i] == 0) {
                sum++;
                money -= coins[i];
                break;
            }
        }
    }
    printf("%d\n", sum);
    return (0);
}
