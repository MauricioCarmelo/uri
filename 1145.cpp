#include <iostream>

using namespace std;

int main(){

    int a=0, b=0, c=0;
    int X, Y;
    cin >> X;
    cin >> Y;

    for(int i = 1; i <= Y; i++){
        printf("%d", i++);
        while((i%X) != 0){
            printf(" %d", i++);
        }
        printf(" %d\n", i);
    }


}

