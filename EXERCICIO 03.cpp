#include <stdio.h> 

int main()
{
    char name[70];
    float paymt, new_paymt ;
    
    printf("Digite o seu nome: ");
    scanf(" %s", &name);
    printf("Digite a seu salário: ");
    scanf("%f", &paymt);
    
    new_paymt = (paymt*0.1)+paymt;
    
    printf("O salario de %s aumentara para %.2f", name, new_paymt);
}
