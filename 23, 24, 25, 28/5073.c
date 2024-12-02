#include <stdio.h>
int main() {
    int len[3];
    int i, j, temp;
    while (1) {
        scanf("%d %d %d", &len[0], &len[1], &len[2]);
        if (len[0] == 0 && len[1] == 0 && len[2] == 0)
            break;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(len[i]<len[j]){
                    temp=len[i];
                    len[i]=len[j];
                    len[j]=temp;
                }
            }
        }
        if (len[2] >= len[0] + len[1]) {
            printf("Invalid\n");
        } else if (len[0] == len[1] && len[1] == len[2]) {
            printf("Equilateral\n");
        } else if (len[0] == len[1] || len[1] == len[2] || len[0] == len[2]) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }
    return 0;
}
