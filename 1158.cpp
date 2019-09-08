#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    while(N-- > 0){
        int X, Y, soma = 0;
        cin >> X;
        cin >> Y;

        if(X%2 == 0) X++;

        for(int i = 0; i < Y; i++){
            soma = soma+X;
            X += 2;
        }

        printf("%d\n", soma);

    }
}
