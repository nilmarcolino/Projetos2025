#include <stdio.h>

int main() 
{
    
    int idade = 0;
    int resultado;

resultado = idade >= 18 ? 1 : 0;

printf("Digite a idade: ");
scanf("%d", &idade);

if (resultado == 1) 
{
    printf("Maior de idade\n");
} else 
{
    printf("Menor de idade\n");


    return 0;   
} 
}
