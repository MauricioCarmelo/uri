#include <iostream>

using namespace std;

//impar se for 1, par se for 0
void imprimir(int *vetor, int tam, bool impar){
    for(int i = 0; i <= tam; i++){
        if(impar) printf("impar[%d] = %d\n", i, *(vetor+i));
        else
            printf("par[%d] = %d\n", i, *(vetor+i));
    }
}

int main(){
    int X;
    int par[5], impar[5], Ip = 0, Ii = 0;
    for(int i = 0; i < 15; i++){
        cin >> X;

        if(X%2 == 0){
            par[Ip] = X;
            Ip++;
        }
        else{
            impar[Ii] = X;
            Ii++;
        }
        if (Ii == 5){
            imprimir(impar, 4, 1);
            Ii = 0;
        }
        if (Ip == 5){
            imprimir(par, 4, 0);
            Ip = 0;
        }
    }
    imprimir(impar, Ii-1, 1);
    imprimir(par, Ip-1, 0);
}
