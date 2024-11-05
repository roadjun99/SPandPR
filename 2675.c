#include <stdio.h>
#include <string.h>
int main() {
    int C;
    scanf("%d", &C);
    for (int i = 0; i < C; i++) {
        int a;
        char T[20];
        scanf("%d %s", &a, T);
        for (int j = 0; j < strlen(T); j++) {
            for (int k = 0; k < a; k++) {
                printf("%c", T[j]);
            }
        }
        printf("\n");
    }
}