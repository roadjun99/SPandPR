#include <stdio.h>
#include <string.h>
int main() {
    int Sum = 0;
    char T[15];
    scanf("%s", T);
    for (int i = 0; i < strlen(T); i++) {
        if ((T[i] == 'A') || (T[i] == 'B') || (T[i] == 'C')) {
            Sum += 3;
        }
        else if ((T[i] == 'D') || (T[i] == 'E') || (T[i] == 'F')) {
            Sum += 4;
        }
        else if ((T[i] == 'G') || (T[i] == 'H') || (T[i] == 'I')) {
            Sum += 5;
        }
        else if ((T[i] == 'J') || (T[i] == 'K') || (T[i] == 'L')) {
            Sum += 6;
        }
        else if ((T[i] == 'M') || (T[i] == 'N') || (T[i] == 'O')) {
            Sum += 7;
        }
        else if ((T[i] == 'P') || (T[i] == 'Q') || (T[i] == 'R') || (T[i] == 'S')) {
            Sum += 8;
        }
        else if ((T[i] == 'T') || (T[i] == 'U') || (T[i] == 'V')) {
            Sum += 9;
        }
        else if ((T[i] == 'W') || (T[i] == 'X') || (T[i] == 'Y') || (T[i] == 'Z')) {
            Sum += 10;
        }
    }
    printf("%d", Sum);
    return 0;
}