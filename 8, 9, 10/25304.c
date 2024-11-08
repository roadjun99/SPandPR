#include <stdio.h>
int main() {
    int X, N, a, b;
    int S = 0;
    scanf("%d\n", &X);
    scanf("%d\n", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &a, &b);
        S += a * b;
    }
    if (X == S)
        printf("Yes");
    else
        printf("No");

    return 0;
}
