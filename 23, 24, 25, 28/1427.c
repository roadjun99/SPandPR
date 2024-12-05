#include <stdio.h>
#include <string.h>
int main() {
    char n[10];
    char tmp;
    scanf("%s", n);
    int len=strlen(n);
    for (int i=0;i<len-1;i++){
        for (int j=0;j<len-1-i;j++){
            if (n[j]<n[j+1]){
                tmp=n[j];
                n[j]=n[j+1];
                n[j+1]=tmp;
            }
        }
    }
    printf("%s", n);
    return 0;
}
