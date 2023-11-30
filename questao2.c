#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    int resultado = num - 1;
    int fatorial = 0;

    printf("Digite um numero para descobrir o fatorial: ");
    scanf("%d", &num);

    for(int i = -1; num >= i; i++){
        printf("%d", i + num);
    }

}