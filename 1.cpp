//1. Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo,
//nas posições pares os valores do primeiro e nas posições impares os valores do segundo.
#include <iostream>
#define tam 5

using namespace std;

int main() {
	
	int vetor1[tam], vetor2[tam], vetor3[20];
	int i;
	
	cout << "Digite os Numeros do primeiro vetor" << endl;
	for(i=0;i<tam;i++){
		cout << "Posicao " << i << " no valor : ";
		cin >> vetor1[i];
		if(vetor1[i] %2==0){
		}
	}
	
	cout << "\n";
	for (i = 0; i<tam; i++ ){
		cout << "Posicao: " << i << " numero: " << vetor1[i] << endl;
	}
	
	cout << "\n";
	cout << "Os numeros pares sao { ";
	for (i=0;i<tam;i++){
		if(vetor1[i]%2 == 0){
			cout << vetor1[i] << " ";
			
		}
	}
	cout << "}" << endl;
	
	cout << "\n";
	cout << "Digite os Numeros do segundo vetor" << endl;
	for(i=0;i<tam;i++){
		cout << "Posicao " << i << " no valor : ";
		cin >> vetor2[i];
		if(vetor2[i] %2!=0){
		}
	}
	
	cout << "\n";
	for (i = 0; i<tam; i++ ){
		cout << "Posicao: " << i << " numero: " << vetor2[i] << endl;
	}
	
	cout << "\n";
	cout << "Os numeros impares sao { ";
	for (i=0;i<tam;i++){
		if(vetor2[i]%2 != 0){
			cout << vetor2[i] << " ";
		}
	}
	cout << "}" << endl;
	
	for(i=0;i<tam;i++){
	
		if(vetor1[i] %2==0){
			vetor3[i] = vetor1[i];
		}
			
		if(vetor2[i] %2!=0){
			vetor3[i] = vetor2[i];
		}
	}
	cout << "\n";
	for (i = 0; i<10; i++ ){
		cout << "Posicao: " << i << " numero: " << vetor3[i] << endl;
	}
	return 0;
}
