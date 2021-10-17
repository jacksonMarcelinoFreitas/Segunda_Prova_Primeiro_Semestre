//2. Leia uma matriz 8 x 8, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

#include <iostream>
#include <stdlib.h>
#define TAM 3
using namespace std;


int main() {
	
	int matriz[TAM][TAM], l,c, linha=0, coluna=0, maior;
	//Preenchendo matriz
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("Posicao [%d][%d] | Elemento ", l,c);
			scanf("%d", &matriz[l][c]);
		}
		printf("\n");
	}
	maior=matriz[0][0];
	//Localização do maior
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			if(matriz[l][c] > maior){
				maior = matriz[l][c];
				linha = l;
				coluna = c;
			}
		}
	}
	
	printf(" O maior elemento eh >> %d na linha %d  e coluna %d\n\n", maior, linha,coluna);
	//Exibindo matriz
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("[%d]", matriz[l][c]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
