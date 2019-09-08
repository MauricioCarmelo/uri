#include <iostream>

using namespace std;

int main(){

    int inicio, fim, x;
    cin >> inicio;
    cin >> fim;

    if(inicio < fim) x = fim-inicio;
    else{
        x = 24-inicio;
        x = x+fim;
    }


    printf("O JOGO DUROU %d HORA(S)\n", x);
}
