#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int resultado = 0;
    int a;
    int b;
    char string1[30][30]; 
    
    while{

    printf("Digite uma palavra(ou 'sair' para finalizar):"); 
    scanf("%s", &string1);
    fflush(stdin);
    if(string1 == str("sair")){
        break;
    }
    }

    a = strlen(string1);
    
    resultado = a / 2;
    printf("A media de caracteres eh: %d", resultado);

}