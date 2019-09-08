#include <iostream>

using namespace std;

int main(){
    int N[20], aux;
    for(int i = 0; i < 20; i++) cin >> N[i];
    for(int i = 0; i < 10; i++){
        aux = N[19-i];
        N[19-i] = N[i];
        N[i] = aux;
    }

    //imprimir
    for(int i = 0; i < 20; i++)
        printf("N[%d] = %d\n", i, N[i]);
}
