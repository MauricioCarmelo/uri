#include <iostream>

using namespace std;

int maior(int vetor[], int tam){
    for(int i=tam-1; i>=0; i--){
        if(vetor[i] != 0) return i;
    }
    return -1;
}

int funcao(int M, int N, int K, int tabuas[]){

    //Disposicao das tabuas
    int quantidadeTabuas[N+1];
    for(int k=0; k<N+1; k++){
        quantidadeTabuas[k] = 0;
    }

    for(int j=0; j<K; j++){
        if(tabuas[j] != 0 && tabuas[j] < N+1){
            quantidadeTabuas[tabuas[j]]++;
        }
    }

    int salao[M];
    for(int k=0; k<M; k++) salao[k]=N;

    int contador = 0;
    //Loop realizado para cada parte do salão.

    for(int i=0; i<M; i++){
        int aux = N, molde = 0; //molde é o index da tábua que será usada.
        int contadorAux = 0;
        int gambiarra = 0;

        while( aux != 0 && gambiarra < N){
            aux = N;
            molde = maior(quantidadeTabuas, N+1);
            //if(molde*2 < N) return -1; //Soh eh preciso percorrer metade do vetor (pois duas tabuas menores que N/2 nao sao suficientes).
            aux = aux - molde; //molde nunca sera maior do que N.
            quantidadeTabuas[molde]--; //nao sera usado novamente
            contadorAux = 1;

            if( aux != 0 && aux < N){ //se faltar um pedaço para ser preenchido.
                if(quantidadeTabuas[aux] > 0 ){ //se foi encontrado uma tábua exata pro espaço em branco.
                    quantidadeTabuas[aux]--;
                    aux = 0;
                    contadorAux = 2;
                }
                else{
                    contadorAux = 0;
                    aux = N; //manter o valor de salao[i] do mesmo jeito caso nao se encontre uma segunda tabua que venha a preencher o espaço
                }
            }
            gambiarra++;
        }
        contador = contador + contadorAux;
        salao[i] = aux;
    }

    //Verificar se todos os espaços no salão foram preenchidos
    for(int k=0; k<M; k++){
        if(salao[k] != 0){
            return -1;
        }
    }
    return contador;
}

int main(){
    int M, N; //Dimensoes do salao
    int L; //Largura das tabuas
    int K; //Numero de tabuas

    while(cin >> M && M != 0 && cin >> N && N != 0){
        //Entrada
        cin >> L;
        cin >> K;
        int tabuas[K]; //Comprimento das tabuas

        for(int i=0; i<K; i++){
            cin >> tabuas[i];
        }

        int restoM, restoN;
        int resposta1, resposta2;
        //double fimM, fimN;
        int auxM, auxN;

        //Aplicar a funcao principal dependendo da orientacao que condiz com L
        restoM = (M*100)%L;
        restoN = (N*100)%L;

        if(restoM != 0 && restoN != 0){
            resposta1 = -1;
            resposta2 = -1;
        }

        else if(restoM == 0 && restoN == 0){
            resposta1 = funcao((M*100)/L, (N*100)/L, K, tabuas);
            resposta2 = funcao((N*100)/L, (M*100)/L, K, tabuas);
        }
        else if(restoM == 0){
            resposta1 = funcao((M*100)/L, (N*100)/L, K, tabuas);
            resposta2 = -1;
        }
        else if(restoN == 0){
            resposta1 = funcao((N*100)/L, (M*100)/L, K, tabuas);
            resposta2 = -1;
        }

        //imprimir a melhor resposta
        if(resposta1 == -1 && resposta2 == -1){
            printf("impossivel\n");
        }
        else if(resposta1 != -1 && resposta2 != -1){
            if(resposta1 < resposta2) printf("%d\n", resposta1);
            else printf("%d\n", resposta2);
        }
        else if(resposta1 != -1) printf("%d\n", resposta1);
        else{
            printf("%d\n", resposta2);
        }

    }
}
