/*Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como título, autor e ano de publicação.
O programa deve continuar solicitando informações até que um
título de livro específico seja inserido.*/

#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int ano;
};

int main(){
    setlocale(LC_ALL, "Portuguese");

    Livro livro;

    while(livro.titulo != "O FIM")
    {
        cout << "Digite o titulo do livro: ";
        getline(cin, livro.titulo);

        cout << "Digite o nome do autor do livro: ";
        getline(cin, livro.autor);

        cout << "Digite o ano do de publicação do livro: ";
        cin >> livro.ano;

        cout << "\nTitulo do livro: " << livro.titulo << " Autor do livro: " << livro.autor << " Ano de Publicação " << livro.ano << endl;

    }

}
