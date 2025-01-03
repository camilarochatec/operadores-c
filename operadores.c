#include <stdio.h>
int main(){
    int a,b;
    printf("digite um número inteiro:\n ");
    scanf("%d", &a);
    printf("digite outro número inteiro:\n ");
    scanf("%d", &b);

    //operadores aritméticos
    printf("a soma de %d e %d é = %d \n", a,b,a+b);
    printf("a subtração de %d e %d é = %d \n", a,b,a-b);
    printf("a multiplicação de %d e %d é = %d \n", a,b,a*b);
    printf("a divisão de %d e %d é = %d \n", a,b,a/b);
    printf("o resto entre %d e %d é = %d \n", a,b,a%b);
    
    //operadores de comparação
    printf("a é igual b? %d \n", a==b);
    printf("a é maior que b? %d\n", a>b);
    printf("a é menor que b? %d\n", a<b);

    //operadores lógicos
    printf("a e b é maior que zero? %d\n", (a>0) && (b>0));
    printf("a ou b é menor que 10? %d \n", (a<10) || (b<10));

    return 0;
}