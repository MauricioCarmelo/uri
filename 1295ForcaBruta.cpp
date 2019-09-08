#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int N;
	
	while( cin >> N && N != 0){
		
		float x[N], y[N];
		float d, menor = 10000;
		
		for(int i = 0; i < N; i++){
			cin >> x[i];
			cin >> y[i];
		}
		
		for(int i = 0; i < N-1; i++){
			for(int j = i+1; j < N; j++){
				d = sqrt(pow((x[i]-x[j]), 2) + pow( (y[i]-y[j]), 2));
				if(d < menor){
					menor = d;
				}
			}
		}

		if(menor >= 10000){
			printf("INFINITY\n");
		}
		else{
			printf("%.4lf\n", menor);
		}
		
	}	
}