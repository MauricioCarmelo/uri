#include <iostream>

using namespace std;

int main(){
    int N[1000];
    int T;
    cin >> T;
    for(int i = 0, k = 0; i < 1000; i++, k++){
        N[i] = k;
        if(k == T-1) k = -1;
    }

    //imprimir
    for(int i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, N[i]);
}
