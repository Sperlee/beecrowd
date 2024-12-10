#include <stdio.h>

int main(){
    int a,b,c,troca;
    scanf("%d %d %d",&a,&b,&c);
    int x = a;
    int y = b;
    int z = c;
    if(a > b){
        troca = a;
        a = b;
        b = troca;
    }
    if(a > c){
        troca = c;
        c = a;
        a = troca;
    }
    if(b > c){
        troca = c;
        c = b;
        b = troca;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("\n");
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    return 0;
}