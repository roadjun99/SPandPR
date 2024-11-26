#include <stdio.h>
#include <string.h>
int main(){
    int M, i, e;
    char op[10];
    int set[21]={0};
    scanf("%d", &M);
    for(i=0;i<M;i++){
        scanf("%s", op);
        if(strcmp(op, "add")==0){
            scanf(" %d", &e);
            if(set[e]==0){
                set[e]=1;
            }
            else
                continue;
        }
        else if(strcmp(op, "remove")==0){
            scanf(" %d", &e);
            if(set[e]==1){
                set[e]=0;
            }
            else
                continue;
        }
        else if(strcmp(op, "check")==0){
            scanf(" %d", &e);
            printf("%d\n", set[e]);
        }
        else if(strcmp(op, "toggle")==0){
            scanf(" %d", &e);
            if(set[e]==0){
                set[e]=1;
            }
            else
                set[e]=0;
        }
        else if(strcmp(op, "all")==0){
            for(int j=1;j<21;j++){
                set[j]=1;
            }
        }
        else if(strcmp(op, "empty")==0){
            for(int j=1;j<21;j++){
                set[j]=0;
            }
        }
    }
    return 0;
}
