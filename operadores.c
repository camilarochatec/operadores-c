#include <stdio.h>
int main(){
    int a,b;
    printf("digite um número inteiro:\n ");
    scanf("%d", &a);
    printf("digite outro número inteiro:\n ");
    scanf("%d", &b);

    printf("a soma de a %d e b %d é = \n", a,b,a+b);
    printf("a subtração de a %d e b %d é = \n", a,b,a-b);
    printf("a multiplicação de a %d e b %d é = \n", a,b,a*b);
    printf("a divisão de a %d e b %d é = \n", a,b,a*b);
    printf("o resto entre %d e b %d é = \n", a,b,a%b);

    printf("a é igual b? %d \n", a==b);




}