#include <iostream>

using namespace std;

int main(){
    int X;

    while(cin >> X, X != 0){
        printf("1");
        for(int i = 2; i <= X; i++) printf(" %d", i);
        printf("\n");
    }

}
