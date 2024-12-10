#include <stdio.h>
#include <math.h>


int teste(float a,float b,float c){
    if(a+b > c && fabs(a-b) < c){
        return 1;
    }
    return 0;
}


int main(){
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    if(teste(x,y,z)){
        printf("Perimetro = %.1f\n",(x+y+z));
        return 0;
    }
    printf("Area = %.1f\n",((x+y)/2)*z);
    return 0;
}