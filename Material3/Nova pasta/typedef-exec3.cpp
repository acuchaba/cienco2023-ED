#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

struct Endereco{
    string rua;
    string cidade;
    float cep;
};

typedef Endereco TipoEndereco;

int main(){
    setlocale(LC_ALL, "Portuguese");
    TipoEndereco endereco;

    cout << "Insira o nome da rua: ";
    getline(cin, endereco.rua);

    cout << "\nInsira o nome de sua cidade: ";
    getline(cin, endereco.cidade);

    cout << "\nInsira o seu CEP: ";
    cin >> endereco.cep;

    cout << "\nSeu endereço é: \n" << "Rua: " << endereco.rua << "\nCidade: " << endereco.cidade << "\nCEP: " << endereco.cep;
}
