#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int p1 = 0, p2 = 1, ultimo;
    printf("0");
    N--;
    if(N > 0){
        printf(" 1");
        N--;
    }
    while(N > 0){
        ultimo = p1 + p2;
        p1 = p2;
        p2 = ultimo;
        printf(" %d", ultimo);
        N--;
    }
    printf("\n");
}
