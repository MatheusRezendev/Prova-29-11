#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char string1[30]; 
    char string2[30];
    int resultado = 0;
    int a;
    int b;
 
    printf("Digite uma palavra:"); 
    scanf("%s", &string1);
    fflush(stdin);

    printf("Digite mais uma palavra:");
    scanf("%s", &string2);
    fflush(stdin);

    a = strlen(string1);
    b = strlen(string2);
    int c = a + b;
    resultado = c / 2;
    printf("A media de caracteres eh: %d", resultado);

}