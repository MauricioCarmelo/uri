#include <iostream>

using namespace std;

int main(){
    int N, fat=1;
    cin >> N;

    while(N > 1){
        fat = fat*N;
        N--;
    }
    printf("%d\n", fat);
}
