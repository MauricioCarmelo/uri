#include <iostream>

using namespace std;

int main(){
    float soma = 0;

    for(int i = 1; i <= 100; i++){
        soma = soma + (1.00/i);
    }
    printf("%.2f\n", soma);
}


