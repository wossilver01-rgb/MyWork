#include <stdio.h>

int main() {
 char nome[60];
 float nota;
 int frequencia;


printf("digite o nome do aluno:\n");
    scanf("%s", nome);

printf("digite a nota do aluno:\n");
    scanf("%f", &nota);

printf("digite a frequencia do aluno:\n");
    scanf("%d", &frequencia);  
    
    if (nota >= 7 && frequencia >= 75){
        printf("aluno aprovado\n");
    } else {
        printf("aluno reprovado\n");
    }


    printf("nome do aluno: %s\n", nome);
    printf(" nota do aluno: %.2f\n", nota);
    printf("frequencia do aluno: %d\n", frequencia);
return 0;

}