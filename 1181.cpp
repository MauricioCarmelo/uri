#include <iostream>

using namespace std;

int main(){
    float Matriz[12][12], soma = 0;
    int L;
    char T;
    cin >> L;
    cin >> T;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> Matriz[i][j];
        }
    }

    for(int i = 0; i < 12; i++){
        soma = soma + Matriz[L][i];
    }

    if(T == 'S'){
        printf("%.1f\n", soma);
    }
    else{
        printf("%.1f\n", soma/12.0);
    }

}
