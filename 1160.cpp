#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T-- != 0){
        int PA, PB, years = 0;
        float G1, G2;
        cin >> PA;
        cin >> PB;
        cin >> G1;
        cin >> G2;

        while(PA <= PB){
            PA = PA + (int)PA*G1/100;
            PB = PB + (int)PB*G2/100;
            years++;
            if(years > 100){
                years = -1;
                break;
            }
        }
        if(years == -1) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", years);

    }
}
