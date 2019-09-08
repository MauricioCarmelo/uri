#include <iostream>

using namespace std;

int main(){
    double Matriz[12][12], soma = 0;
    char T;
    cin >> T;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> Matriz[i][j];
        }
    }

    int x = 0;
    int y = 12;
    for(int i = 11; i > 6; i--){
        x++;
        y--;
        for(int j = x; j < y; j++){
            soma = soma + Matriz[i][j];
        }

    }

    if(T == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/30.0);
    }

}


