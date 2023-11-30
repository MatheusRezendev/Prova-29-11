#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("A soma eh igual: %d", num1 + num2);
    }else if(num1 == num2){ 
        printf("A multiplicao deles eh igual a: %d", num1 * num2);   
    }else{
        printf("A subtracao deles eh igual a: %d", num1 - num2);   
    }
}