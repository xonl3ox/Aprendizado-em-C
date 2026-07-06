#include <stdio.h>
#include <stdbool.h>
bool aprovacao(int f_Port, int f_Mat, float nota_P, float nota_M){
    if(f_Port>=60 && f_Mat>=60 && nota_P>=60 && nota_M>=60){
        return true;
    }else{
        return false;
    }
}
int main(){
    int idade, faltas1, faltas2;
    int menor = 1000, maior = 0;
    int alunos = 0, aprovados = 0, reprovados = 0;
    float nota1, nota2;
    float soma_port = 0, soma_mat = 0; 
    do{
    printf("Idade (-1 para encerrar)\n");
    scanf("%d",&idade);
        if(idade<0){
            break;
        }
        if(idade>maior){
            maior=idade;
        }
         if(idade<menor){
            menor=idade;
        }
        alunos++;
        printf("Nota de Portugues: \n");
        scanf("%f",&nota1);
        soma_port+=nota1;

        printf("Nota de Matematica: \n");
        scanf("%f",&nota2);
        soma_mat+=nota2;

        printf("Quantidade de faltas em portugeus:\n");
        scanf("%d",&faltas1);

        printf("Quantidade de faltas em matematica:\n");
        scanf("%d",&faltas2);
        scanf("%*c");
    
        if(aprovacao(faltas1,faltas2,nota1,nota2) == true){
        aprovados++;
        }else{
        reprovados++;
        }
    }while (idade>=0);
    if(alunos>0){
        printf("Quantidade de alunos: %d\n",alunos);
        printf("Maior idade dos alunos: %d\n",maior);
        printf("Menor idaide dos alundos: %d\n",menor);
        printf("Media da turma em matematica: %.2f\n",soma_mat/alunos);
        printf("Media da turma em portugues: %.2f\n",soma_port/alunos);
        printf("media geral da turma: %.2f\n",(soma_port+soma_mat)/alunos*2);
        printf("Quantidade de alunos reprovados: %d\n",reprovados);
        printf("Quantidade de alunos aprovados: %d\n",aprovados);
    }else{
        printf("nao tem alunos");
    }
    return 0;
}
