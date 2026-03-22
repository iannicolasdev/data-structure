#include <iostream>

using namespace std;

const int TAM = 5;

void tamanho(int topo) {
    cout << "Tamanho: " << topo << endl; 
}

void empilhar(int &topo, int pilha[]) {
    if (topo == TAM) {
        cout << "A pilha esta cheia.\n";
        return;
    }
    cout << "Empilhar: ";
    cin >> pilha[topo];
    topo++;
}

void desempilhar(int &topo, int pilha[]) {
    if (topo == 0) {
        cout << "A pilha esta vazia.\n";
        return;
    }
    cout << "Removido: " << pilha[topo - 1] << endl;
    topo--;
}

void visualizar(int topo, int pilha[]) {
    if (topo == 0) {
        cout << "A pilha esta vazia.\n";
        return;
    }
    for (int i = topo - 1; i >= 0; i--) cout << i << " [" << pilha[i] << "]\n";
}

int main(){
    int pilha[TAM];
    int topo = 0;

    empilhar(topo, pilha);
    empilhar(topo, pilha);
    empilhar(topo, pilha);
    empilhar(topo, pilha);
    empilhar(topo, pilha);

    visualizar(topo, pilha);
    tamanho(topo);

    desempilhar(topo, pilha);
    tamanho(topo);

    return 0;
}