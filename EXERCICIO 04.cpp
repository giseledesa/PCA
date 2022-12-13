#include <stdio.h> 

int main()
{
    float conta, new_paymt;
    
    printf("Digite o valor da conta: ");
    scanf("%f", &conta);
    
    new_paymt = conta*0.1;
    
    printf("A porcentagem do garçom equivale a %.2f reais", new_paymt);
}
