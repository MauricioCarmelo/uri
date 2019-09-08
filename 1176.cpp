#include <iostream>

using namespace std;

int main(){
    int T, ultimo = 1;
    cin >> T;
    unsigned long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;

    while(T-- > 0){
        int N;
        cin >> N;
        if(N <= ultimo)
            printf("Fib(%d) = %llu\n", N, fib[N]);
        else{
            for(int i = ultimo+1; i <= N; i++){
                fib[i] = fib[i-1]+fib[i-2];
            }
            printf("Fib(%d) = %llu\n", N, fib[N]);
            ultimo = N;
        }
    }
}

