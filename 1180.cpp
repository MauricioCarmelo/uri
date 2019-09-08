#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int X[N];

    int menor, pos = 0;
    cin >> menor;
    X[0] = menor;

    for(int i = 1; i < N; i++) {
        cin >> X[i];
        if(X[i] < menor){
            menor = X[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);

}
