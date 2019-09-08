#include <iostream>

using namespace std;

int main(){
    int X;

    while(cin >> X, X != 0){
        int soma = 0;
        if(X%2 != 0) X++;
        for(int i = 0; i < 5; i++){
            soma = soma + X;
            X += 2;
        }
        printf("%d\n", soma);
    }
}
