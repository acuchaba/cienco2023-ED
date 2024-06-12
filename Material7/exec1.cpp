#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> fila;
    string cliente;
    int opcao;

    do {
        cout << "Escolha uma opcao da loja:\n" << endl;
        cout << "1. Inserir cliente na fila" << endl;
        cout << "2. Atender o proximo cliente" << endl;
        cout << "3. Exibir fila de espera" << endl;
        cout << "0. Sair\n" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        cout << endl;

        switch(opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                cin >> cliente;
                fila.push(cliente);
                cout << "O cliente " << cliente << " foi inserido na fila." << endl;
                break;

            case 2:
                if (!fila.empty()) {
                    cout << "Atendendo o cliente " << fila.front() << "." << endl;
                    fila.pop();
                } else {
                    cout << "Nao ha clientes na fila para atender." << endl;
                }
                break;

            case 3:
                if (!fila.empty()) {
                    cout << "Clientes na fila de espera: ";
                    queue<string> filaAuxiliar = fila; // Copia da fila para exibição
                    while (!filaAuxiliar.empty()) {
                        cout << filaAuxiliar.front() << " ";
                        filaAuxiliar.pop();
                    }
                    cout << endl;
                } else {
                    cout << "Nao ha clientes na fila de espera." << endl;
                }
                break;

            case 0:
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Opcao invalida." << endl;
                break;
        }

        cout << endl;
    } while (opcao != 0);

    return 0;
}
