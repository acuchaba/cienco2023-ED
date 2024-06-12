#include <iostream>
#include <locale>
#include <stack>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    stack<int> pilha;
    int opcao;

    do {
        cout << "Escolha uma op��o:\n";
        cout << "1- Inserir n�mero\n";
        cout << "2- Remover o n�mero do topo\n";
        cout << "3- Verificar o n�mero do topo\n";
        cout << "4- Verificar se a pilha est� vazia\n";
        cout << "5- Mostrar tamanho da pilha\n";
        cout << "0- Sair\n";
        cout << "Op��o: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int numero;
                cout << "Digite um n�mero para ser inserido: ";
                cin >> numero;
                pilha.push(numero);
                cout << "N�mero " << numero << " foi inserido na pilha.\n";
                break;
            }
            case 2: {
                if (!pilha.empty()) {
                    int numeroRemovido = pilha.top();
                    pilha.pop();
                    cout << "N�mero " << numeroRemovido << " foi removido da pilha.\n";
                } else {
                    cout << "A pilha est� vazia.\n";
                }
                break;
            }
            case 3: {
                if (!pilha.empty()) {
                    cout << "N�mero do topo da pilha: " << pilha.top() << endl;
                } else {
                    cout << "A pilha est� vazia.\n";
                }
                break;
            }
            case 4: {

                if(pilha.empty()){
                   cout << "A pilha est� vazia.\n";
                }
                else{
                    cout << "A pilha n�o est� vazia.\n";
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
                cout << "Op��o inv�lida. Insira outra op��o.\n";
                cout << endl;
                continue;
            }
        }

        cout << endl;
    } while (opcao != 0);
}
