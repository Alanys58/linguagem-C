#include <stdio.h>

int x = 0;
int y = 0;
int rest = 0;

int main()

{
    printf("digite um numero:");
    scanf("%i",&x);
    
    printf("digite um numero:");
    scanf("%i",&y);
    
    //soma +
    
    rest = x+y;
    printf("A soma é: %i \r\n", rest);
    
    //subtração -
    
    rest = x - y;
    printf("A subtração é: %i \r\n", rest);
    
    //multiplicação *
    
    rest = x * y;
    printf("A multiplicação é: %i \r\n", rest);
    
    //divisão
    
    rest = x / y;
    printf("A divisão é: %i \r\n", rest);
}