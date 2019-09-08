#include <iostream>
#include <math.h>
#define TAM 5



int menorDistancia(float pontos[], int inicio, int fim){
	
	int tamanho = fim-inicio;
	int menorD;
	
	if(tamanho == 1)
		return 10001; //considerar 10001 como infinito
	
	if(tamanho == 2){
		menorD = pontos[fim] - pontos[inicio];
		return menorD;
	}
	
}

int dividir(float pontos[], int inicio, int fim){
	
	int mediana;
	
	if(inicio < fim)
	{
		mediana = (inicio+fim)/2;
		dividir(pontos, inicio, mediana);
		dividir(pontos, mediana+1, fim);
		return menorDistancia(pontos, inicio, fim);
	}
	
	
	
}


int main(){
	
	float pontos[TAM] = {1, 3, 6, 8, 90};
	
	printf("%d\n", dividir(pontos, 0, 4));
	
	
}