#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double A, B, C, aux;
	cin >> A;
	cin >> B;
	cin >> C;
	
	
	
	if( (A < B) || (A < C)){
		if( B > C){
			aux = B;
			B = A;
			A = aux;
		}
		else{
			aux = C;
			C = A;
			A = aux;
		}		
	}
	//decidir o tipo de triangulo
	if( A >= B + C ){
		printf("NAO FORMA TRIANGULO\n");
	}
	else if( pow(A, 2) == (pow(B, 2) + pow(C, 2)) ){
		printf("TRIANGULO RETANGULO\n");
	}
	else if( pow(A, 2) > (pow(B, 2) + pow(C, 2)) ){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	else if( pow(A, 2) < (pow(B, 2) + pow(C, 2)) ){
		printf("TRIANGULO ACUTANGULO\n");
	}
	
	if( (A == B) && (A == C)){
		printf("TRIANGULO EQUILATERO\n");	
	}
	else if( (A == B) || (B == C) || (A == C) ){
		printf("TRIANGULO ISOSCELES\n");
	}
}