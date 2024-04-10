#include <iostream>
#include <locale>
#include <string.h>
#include <vector>

using  namespace std;

typedef struct Pessoa{
    string nome;
    string endereco;
    int cpf;
    int idade;
} Pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");
    vector <Pessoa> pessoaVet;
    Pessoa pessoa;

    for(int i = 1; i <= 5; i++){
        cout << "Insira seu nome: ";
        getline(cin, pessoa.nome);

        cout << "\nInsira seu endereço: ";
        getline(cin,pessoa.endereco);

        cout << "\nInsira seu CPF: ";
        cin >> pessoa.cpf;

        cout << "\nInsira sua idade: ";
        cin >> pessoa.idade;

        cout << endl;

        pessoaVet.push_back(pessoa);

        cin.ignore();
    }

    for(const auto& p : pessoaVet){
        cout << "Nome: " << p.nome << " Endereço: " << p.endereco << " CPF: " << p.cpf << " Idade: " << p.idade << endl;
    }
}
