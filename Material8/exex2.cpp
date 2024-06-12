#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimirLista(const list<string>& lista) {
    if (lista.empty()) {
        cout << "Lista vazia\n";
    } else {
        for (const auto& elemento : lista) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

void imprimirListaReversa(const list<string>& lista) {
    if (lista.empty()) {
        cout << "Lista vazia\n";
    } else {
        for (auto it = lista.rbegin(); it != lista.rend(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
}

void ordenarLista(list<string>& lista) {
    if (!lista.empty()) {
        for (auto it = lista.begin(); it != lista.end(); ++it) {
            for (auto jt = next(it); jt != lista.end(); ++jt) {
                if (*it > *jt) {
                    swap(*it, *jt);
                }
            }
        }
    }
}

int main() {
    list<string> lista;
    string funcionario;
    int qntFun;

    cout << "BEM VINDO AO CADASTRO DE FUNCIONARIOS !!\n";
    cout << "--------------------------------------\n";
    cout << endl;

    cout << "Quantos funcionarios serao cadastrados?: ";
    cin >> qntFun;

    cout << endl;

    for (int i = 0; i < qntFun; ++i) {
        cout << "Digite o nome do funcionario " << i + 1 << ": ";
        cin >> funcionario;
        lista.push_back(funcionario);
    }

    cout << "\nLista de funcionarios na ordem de cadastro: \n";
    imprimirLista(lista);

    ordenarLista(lista);
    cout << "\nLista de funcionarios ordenada: \n";
    imprimirLista(lista);

    cout << "\nLista de funcionarios na ordem reversa: \n";
    imprimirListaReversa(lista);

    cout << "\nNumero de funcionarios cadastrados: " << lista.size() << endl;

    return 0;
}
