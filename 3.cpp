//3. Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida,
//escreva o número de alunos cuja pior nota foi na prova 1, o número de alunos
//cuja pior nota foi na prova 2, e o número de alunos cuja pior nota foi na prova 3.
//Em caso de empate das piores notas de um aluno, o critéio de desempate é arbitrário,
//mas o aluno deve ser contabilizado apenas uma vez.
#include <stdio.h>
#include <stdlib.h>

#define TAM1 10 //alunos
#define TAM2 3	//provas

int main(){
	
    int notas[TAM1][TAM2], l, c, menor, p1, p2, p3;

    //Preenche a matriz com as notas dos alunos
    printf("Informe os elementos da matriz: \n");
    for (l = 0; l < TAM1; l++){
        printf("\n\t\t\Prova > %d \n", l+1);
        for (c = 0; c < TAM2; c++) {
            printf("Nota do aluno > %d = ", c+1);
            scanf("%d", &notas[l][c]);
        }
    }
    
    printf("\n\nRELATORIO:");
    p1 = p2 = p3 = 0;//zera os contadores de alunos com menores notas
    for (c = 0; c < TAM2; c++) {
        //para cada aluno mostra o numero, as notas, a menor nota
        printf("\n\n\nPara o aluno %d as notas foram: \n\t", c+1);
        menor = 10; //marca a menor nota para reducao        
        for (l = 0; l < TAM2; l++) {
            //identifica a menor nota
            if(notas[l][c] <= menor)
                menor = notas[l][c];
            //imprime as notas
            printf("Nota para a prova %d foi = %d\n\t", l+1, notas[l][c]);
        }
        
        //imprime a menor nota
        printf("\n\tPara este aluno a MENOR nota foi: %d", menor);
        
        //conta o total de alunos com menores notas nas provas 1, 2 e 3
        for (l = 0; l < TAM1; l++) {
            if(menor == notas[l][c] && l == 0){
                p1++;
                break;
            }
            else if(menor == notas[l][c] && l == 1){
                p2++;
                break;
            }
            else if(menor == notas[l][c] && l == 2){
                p3;
                break;
            }
        }
 	}
    
    //imprime o total de alunos que tieram a menor nota nas provas 1, 2, e 3
    printf("\n\n\nQuantidade de alunos que tiveram menor notas na prova 1 foi de %d\n", p1);
    printf("Quantidade de alunos que tiveram menor notas na prova 2 foi de %d\n", p2);
    printf("Quantidade de alunos que tiveram menor notas na prova 3 foi de %d\n", p3);
    
    return 0;
}
