#include <stdio.h>
#include <string.h>
int main(){
    float N;
    float sum, SN=0.0;
    char G[2];
    char name[50];
    for(int i=0;i<20;i++){
        scanf("%s %f %s", name, &N, G);
        if(strcmp(G, "A+")==0){
            sum += N*4.5;
            SN+=N;
        }
        else if(strcmp(G, "A0")==0){
            sum += N*4.0;
            SN+=N;
        }
        else if(strcmp(G, "B+")==0){
            sum += N*3.5;
            SN+=N;
        }
        else if(strcmp(G, "B0")==0){
            sum += N*3.0;
            SN+=N;
        }
        else if(strcmp(G, "C+")==0){
            sum += N*2.5;
            SN+=N;
        }
        else if(strcmp(G, "C0")==0){
            sum += N*2.0;
            SN+=N;
        }
        else if(strcmp(G, "D+")==0){
            sum += N*1.5;
            SN+=N;
        }
        else if(strcmp(G, "D0")==0){
            sum += N*1.0;
            SN+=N;
        }
        else if(strcmp(G, "F")==0){
            sum += N*0.0;
            SN+=N;
        }
        else
            continue;
    }
    printf("%f", sum/SN);
    return 0;
}
