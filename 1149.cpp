#include <iostream>

using namespace std;

int main(){
    int A, N, soma = 0;
    cin >> A;
    while(cin >> N, N <= 0);

    while(N > 0){
        soma = soma + A;
        A++;
        N--;
    }
    printf("%d\n", soma);

}
