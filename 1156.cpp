#include <iostream>

using namespace std;

int main(){
    float i = 3, j = 2, soma = 1;

    while(i <= 39){
        soma = soma + (i/j);
        i = i+2;
        j = j*2;
    }
    printf("%.2f\n", soma);
}
