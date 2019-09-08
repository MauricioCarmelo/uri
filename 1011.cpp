#include <iostream>
#include <math.h>
#include <stdio.h>

#define pi 3.14159

using namespace std;

int main(){
	int raio;
	double vol;
	
	cin >> raio;
	
	vol = (4.0/3)*pi*pow(raio, 3);
	
	printf("VOLUME = %.3lf\n", vol);
	
}