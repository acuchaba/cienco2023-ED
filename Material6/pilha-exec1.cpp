#include <iostream>
#include <locale>
#include <stack>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    stack<int> pilha;
    int opcao;

    do {
        cout << "Escolha uma opção:\n";
        cout << "1- Inserir número\n";
        cout << "2- Remover o número do topo\n";
        cout << "3- Verificar o número do topo\n";
        cout << "4- Verificar se a pilha está vazia\n";
        cout << "5- Mostrar tamanho da pilha\n";
        cout << "0- Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int numero;
                cout << "Digite um número para ser inserido: ";
                cin >> numero;
                pilha.push(numero);
                cout << "Número " << numero << " foi inserido na pilha.\n";
                break;
            }
            case 2: {
                if (!pilha.empty()) {
                    int numeroRemovido = pilha.top();
                    pilha.pop();
                    cout << "Número " << numeroRemovido << " foi removido da pilha.\n";
                } else {
                    cout << "A pilha está vazia.\n";
                }
                break;
            }
            case 3: {
                if (!pilha.empty()) {
                    cout << "Número do topo da pilha: " << pilha.top() << endl;
                } else {
                    cout << "A pilha está vazia.\n";
                }
                break;
            }
            case 4: {

                if(pilha.empty()){
                   cout << "A pilha está vazia.\n";
                }
                else{
                    cout << "A pilha não está vazia.\n";
                }

                break;
            }
            case 5: {
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;
            }
            case 0: {
                cout << "Saindo...\n";
                break;
            }
            default: {
                cout << endl;
                cout << "Opção inválida. Insira outra opção.\n";
                cout << endl;
                continue;
            }
        }

        cout << endl;
    } while (opcao != 0);
}
