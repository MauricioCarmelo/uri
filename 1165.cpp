#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    while(N-- > 0){
        int X, primo = 1;
        cin >> X;
        for(int i = 2; i < X; i++){
            if(X%i == 0) primo = 0;
        }
        if(primo == 1) printf("%d eh primo\n", X);
        else printf("%d nao eh primo\n", X);
    }
}
