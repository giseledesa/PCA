#include <stdio.h> 

int main()
{
    char name[70];
    char sexo;
    int age;
    
    printf("Digite o seu nome: ");
    scanf("%s", &name);
    printf("Digite o gênero o qual se identifica: ");
    scanf(" %c", &sexo);
    printf("Digite a sua idade: ");
    scanf("%d", &age);
   
    if(tolower(sexo)=='f'){
        printf("%s tem %d e é do sexo feminino", name, age);
    }
    else{
        printf("%s tem %d e é do sexo masculino", name, age);
    }
}
