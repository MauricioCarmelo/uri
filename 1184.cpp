#include <iostream>

using namespace std;

int main(){
    float Matriz[12][12], soma = 0;
    char T;
    cin >> T;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> Matriz[i][j];
        }
    }
    int k = 0;
    for(int i = 0; i < 12; i++){
        k++;
        for(int j = k; j < 12; j++){
            soma = soma + Matriz[i][j];
        }
    }

    if(T == 'S'){
        printf("%.1f\n", soma);
    }
    else{
        printf("%.1f\n", soma/66.0);
    }

}


