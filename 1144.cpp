#include <iostream>

using namespace std;

int main(){

    int x=0, y=0, z=0;
    int N;
    cin >> N;

    for(int i=0; i < N; i++){
        x++;
        y = x*x;
        z = y*x;
        printf("%d %d %d\n", x, y, z);
        y++;
        z++;
        printf("%d %d %d\n", x, y, z);
    }
}
