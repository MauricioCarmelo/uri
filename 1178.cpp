#include <iostream>

using namespace std;

int main(){
    double N[100], X;
    cin >> X;
    N[0] = X;
    for(int i = 1; i < 100; i++) N[i] = N[i-1]/2;

    //imprimir
    for(int i = 0; i < 100; i++)
        printf("N[%d] = %.4lf\n", i, N[i]);
}
