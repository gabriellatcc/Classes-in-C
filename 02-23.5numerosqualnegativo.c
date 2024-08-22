#include <stdio.h>
int main(){
    int n,i,neg=0; //o n é numero, o controle do for e o contador de numeros negativos
        for(i=1;i<=5;i++){
            printf("digite um numero: ");
            scanf("%d",&n);
                if(n<0){
                        neg+=1;
                }
        }
        printf("numeros negativos: %d", neg);
    return(0);
}
