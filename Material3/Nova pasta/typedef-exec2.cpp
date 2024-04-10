#include <iostream>
#include <locale>
#include <string.h>
#include <vector>

using  namespace std;

struct Animais{
    string nome;
    string especie;
    int idade;
    float peso;
};

typedef Animais ListaAnimais;

int main(){
    setlocale(LC_ALL, "Portuguese");
    vector <ListaAnimais> animalVet;
    ListaAnimais animais;

    cout << "Digite os dados de 10 animais: \n\n";

    for(int i = 1; i <= 2; i++){
        cout << "Insira o nome do animal: ";
        getline(cin, animais.nome);

        cout << "\nInsira a espécie do animal: ";
        getline(cin,animais.especie);

        cout << "\nInsira a idade do animal: ";
        cin >> animais.idade;

        cout << "\nInsira o peso do animal em KG: ";
        cin >> animais.peso;

        cout << endl;

        animalVet.push_back(animais);

        if(i < 2){
            cout << "Insira os dados do próximo animal: \n\n";
        }

        cin.ignore();
    }

    for(const auto& a : animalVet){
        cout << "Nome: " << a.nome << " Espécie: " << a.especie << " Idade: " << a.idade << " Peso: " << a.peso << endl;
    }
}
