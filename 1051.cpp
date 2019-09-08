#include <iostream>

using namespace std;

int main(){

	float salario, frac, imposto = 0;

	cin >> salario;

    if(salario <= 2000){
        printf("Isento\n");
        return 0;
    }

	if(salario > 4500){
        frac = salario-4500;
        imposto = ((frac*28)/100) + imposto;
        salario = 4500;
	}
	if(salario > 3000){
        frac = salario-3000;
        imposto = ((frac*18)/100) + imposto;
        salario = 3000;
	}
	if(salario > 2000){
        frac = salario-2000;
        imposto = ((frac*8)/100) + imposto;
        salario = 2000;
	}

	printf("R$ %.2f\n", imposto);

}
