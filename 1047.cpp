#include <iostream>

using namespace std;

int main(){

    int hi, hf, mi, mf, h=0, m;
    cin >> hi;
    cin >> mi;
    cin >> hf;
    cin >> mf;

    if(mi <= mf) m = mf-mi;
    else{
        h = -1;
        m = 60-mi;
        m = m+mf;
    }

    if(hi < hf) h = (hf-hi) + h;
    else{
        h = (24-hi) + h;
        h = (h+hf);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
}

