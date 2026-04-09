#include <iostream>
#include <stdlib.h>

using namespace std;

const int TAM = 3;

void visualizar(int fim, int fila[]) {
    if (fim == 0) {
        cout << "fila vazia\n";
        return;       
    }
    for(int i = 0; i < fim; i++) {
        cout << fila[i] << " ";
    }
    cout << "\n";
}

void inserir(int &fim, int fila[]) {
    int valor; 

    if (fim == TAM) {
        cout << "fila cheia\n";
        return;

    } 
    cout << "Inserir: ";
    cin >> valor;
    fila[fim] = valor;
    
    fim++;
    visualizar(fim, fila);
}

void remover(int &fim, int fila[]) {
    if (fim == 0) {
        cout << "fila vazia\n";
        return;
    }
    cout << "Removido: " << fila[0] << "\n";

    for (int i = 0; i < fim - 1; i++) {
        fila[i] = fila[i + 1];
    }

    fim--; 
    visualizar(fim, fila);
}

int main() {
    int fila[TAM] = {0};
    int fim = 0;
    int controle = 1;

    while (controle == 1) {

        int escolha;

        cout << "=========MENU=========\n\n";
        cout << "0 - Sair\n";
        cout << "1 - Inserir\n";
        cout << "2 - Remover\n";
        cout << "3 - Visualizar\n\n";
        
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 0:
                controle = 0;
                break;
            case 1:
                inserir(fim, fila);
                break;
            case 2:
                remover(fim, fila);
                break;
            case 3:
                visualizar(fim, fila);
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