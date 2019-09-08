#include <iostream>

using namespace std;

int main(){
	
	double valor;
	int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, mo1=0, mo50=0, mo25=0, mo10=0, mo05=0, mo01=0;
	
	cin >> valor;
	
	while( valor > 0.01){
	
		if( valor >= 100.0){
			n100++;
			valor = valor - 100;
		}
		if( valor < 100 && valor >= 50){
			n50++;
			valor = valor - 50;
		}
		if( valor < 50 && valor >= 20){
			n20++;
			valor = valor - 20;
		}
		if( valor < 20 && valor >= 10){
			n10++;
			valor = valor - 10;
		}
		if( valor < 10 && valor >= 5){
			n5++;
			valor = valor - 5;
		}
		if( valor < 5 && valor >= 2){
			n2++;
			valor = valor - 2;
		}
		if( valor < 2 && valor >= 1){
			mo1++;
			valor = valor - 1;
		}
		if( valor < 1 && valor >= 0.50){
			mo50++;
			valor = valor - 0.50;
		}
		if( valor < 0.50 && valor >= 0.25){
			mo25++;
			valor = valor - 0.25;
		}
		if( valor < 0.25 && valor >= 0.10){
			mo10++;
			valor = valor - 0.10;
		}
		if( valor < 0.10 && valor >= 0.05){
			mo05++;
			valor = valor - 0.05;
		}
		if( valor < 0.05 && valor >= 0.01){
			mo01++;
			valor = valor - 0.01;
		}
	}
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", mo1);
	printf("%d moeda(s) de R$ 0.50\n", mo50);
	printf("%d moeda(s) de R$ 0.25\n", mo25);
	printf("%d moeda(s) de R$ 0.10\n", mo10);
	printf("%d moeda(s) de R$ 0.05\n", mo05);
	printf("%d moeda(s) de R$ 0.01\n", mo01);
	
	/*cout << "NOTAS:\n";
	cout << n100 << " nota(s) de R$ 100.00\n";
	cout << n50  << " nota(s) de R$ 50.00\n";
	cout << n20  << " nota(s) de R$ 20.00\n";
	cout << n10  << " nota(s) de R$ 10.00\n";
	cout << n5   << " nota(s) de R$ 5.00\n";
	cout << n2   << " nota(s) de R$ 2.00\n";
	
	cout << "MOEDAS:\n";
	cout << mo1  << " moedas(s) de R$ 1.00\n";
	cout << mo50 << " moedas(s) de R$ 0.50\n";
	cout << mo25 << " moedas(s) de R$ 0.25\n";
	cout << mo10 << " moedas(s) de R$ 0.10\n";
	cout << mo05 << " moedas(s) de R$ 0.05\n";
	cout << mo01 << " moedas(s) de R$ 0.01";*/
}