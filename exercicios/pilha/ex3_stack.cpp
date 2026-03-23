#include <iostream>

using namespace std;

const int TAM = 3;

int pilha_topo(int topo, int pilha[]) {
    if (topo == 0) {
        cout << "A pilha esta vazia\n";
        return -1;
    }
    return pilha[topo - 1];
}

void empilhar(int valor, int &topo, int pilha[]) {
    if (topo == TAM) {
        cout << "A pilha esta cheia\n";
        return;
    }
    pilha[topo] = valor;
    topo++;
}

int main(){
    int pilha[TAM];
    int topo = 0;

    empilhar(10, topo, pilha);
    empilhar(20, topo, pilha);
    empilhar(30, topo, pilha);

    for (int i = topo - 1; i >= 0; i--) cout << i << " [" << pilha[i] << "]\n";

    cout << "Topo: " <<pilha_topo(topo, pilha);

    return 0;
}