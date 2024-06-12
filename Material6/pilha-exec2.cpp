#include <iostream>
#include <locale>
#include <stack>
   using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    stack<int> pilha;
    int numero;

    for(int i = 1; i <= 5; i++){
        cout << "Digite um número:\n";
        cin >> numero;
        pilha.push(numero);
        }

    cout << "Pilha invertida:\n";
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
}
