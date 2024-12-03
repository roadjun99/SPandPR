#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char N[10000];
    int B;
    int D=0;
    scanf("%s %d", N, &B);
    int len = strlen(N);
    for(int i=0;i<len;i++){
        int value = 0;
        if (N[i]>='0'&&N[i]<='9')
            value=N[i]-'0';
        else if (N[i]>='A'&&N[i]<='Z')
            value=N[i]-'A'+10;
        D+=value*(int)pow(B, len-1-i);
    }
    printf("%d\n", D);
    return 0;
}
