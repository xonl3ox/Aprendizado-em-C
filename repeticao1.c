#include <stdio.h>

int main()
{
    int nota , maior = 0, alunos = -1, menor =100;
    float soma = 0;
    do {
        if (menor>nota){
            menor = nota;
        }  
        printf("Digite a nota:  (-1 para encerrar\n");
            scanf("%d",&nota);
        alunos++;
        soma+=nota;
        if (maior<nota){
            maior = nota;
        }
          
    } while (nota != -1);
    if (alunos == 0){
        return 0;
    }
    printf("Quantidade de alunos: %d\n",alunos);
    printf("Media da turma: %d\n",soma/alunos);
    printf("Maior nota: %d\n",maior);
    printf("Menor nota: %d\n",menor);
    return 0;
}
