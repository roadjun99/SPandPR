#include <stdio.h>
int main(){
    int max=0;
    int n, m=0;
    int a[9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d ", &a[j]);
            if(max<a[j]){
                max=a[j];
                n=i;
                m=j;
            };
        }
    }
    printf("%d\n", max);
    printf("%d %d", n+1, m+1);
    return 0;
}
