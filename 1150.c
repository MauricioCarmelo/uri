#include <iostream>

using namespace std;

int main(){
    int X, Z, vezes = 0, aux;
    cin >> X;

    cin >> Z;
    while( X >= Z){
        cin >> Z;
    }

    aux = X;
    vezes++;
    while(aux < Z){
        aux = aux + X;
        vezes++;
        X = X+1;
    }

    printf("%d\n", vezes);

}
