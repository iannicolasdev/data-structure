#include <iostream>
#include <stdlib.h>

using namespace std;

#define TAM 10

bool cheio(int topo) {
    return topo == TAM;
}

bool vazio(int topo) {
    return topo == 0;
}

void empilhar(int &topo, int pilha[]) {
    if (cheio(topo)) {
        cout << "A pilha esta cheia.\n";
        return;
    }
    cout << "Empilhar: ";
    cin >> pilha[topo];
    topo++;
}

void desempilhar(int &topo, int pilha[]) {
    if (vazio(topo)) {
        cout << "A pilha esta vazia.\n";
        return;
    }
    cout << "Removido: " << pilha[topo - 1] << "\n";
    topo--;
}

void visualizar(int topo, int pilha[]) {
    if (vazio(topo)) {
        cout << "A pilha esta vazia.\n";
        return;
    }
    for (int i = topo - 1; i >= 0; i--) cout << i << ": [" << pilha[i] << "]\n";
}

int main(){
    int pilha[TAM];
    int topo = 0;

    int controle = 1;

    while (controle == 1) {

        int escolha;

        cout << "=========MENU=========\n\n";
        cout << "0 - Sair\n";
        cout << "1 - Empilhar\n";
        cout << "2 - Desempilhar\n";
        cout << "3 - Visualizar\n\n";
        
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 0:
                controle = 0;
                break;
            case 1:
                empilhar(topo, pilha);
                break;
            case 2:
                desempilhar(topo, pilha);
                break;
            case 3:
                visualizar(topo, pilha);
                break;    
            default:
                cout << "Opcao invalida\n";
                break;
            }
            system("PAUSE");
            system("cls");
        }

    return 0;
}