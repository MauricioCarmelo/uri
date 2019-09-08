#include <iostream>

using namespace std;

int main(){
    int X, qtd = 0;
    float soma = 0;

    while(cin >> X, X >= 0){
        soma = soma+X;
        qtd++;
    }
    printf("%.2f\n", soma/qtd);
}

