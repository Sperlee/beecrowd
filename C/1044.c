#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x > y){
        if(x%y == 0){
            printf("Sao Multiplos\n");
            return 0;
        }
        else{
            printf("Nao sao Multiplos\n");
            return 0;
        }
    }
    else{
        if(y%x == 0){
            printf("Sao Multiplos\n");
            return 0;
        }
        else{
            printf("Nao sao Multiplos\n");
            return 0;
        }
    }
}