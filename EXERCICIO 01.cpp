#include <stdio.h>

int main()
{
    float area, base, h;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("\nDigite a altura do triangulo: ");
    scanf("%f", &h);
    area = (base*h)/2;
    printf("Area = %.2f", area);
}
