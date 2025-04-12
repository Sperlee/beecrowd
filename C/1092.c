#include <stdio.h>

void matriz_create (int **matriz,int m,int n){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
}



int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int matriz[m][n];
    while(m != 0 && n != 0){
        matriz_create(matriz,m,n);
    }
}