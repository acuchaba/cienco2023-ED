/*Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como t�tulo, autor e ano de publica��o.
O programa deve continuar solicitando informa��es at� que um
t�tulo de livro espec�fico seja inserido.*/

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

        cout << "Digite o ano do de publica��o do livro: ";
        cin >> livro.ano;

        cout << "\nTitulo do livro: " << livro.titulo << " Autor do livro: " << livro.autor << " Ano de Publica��o " << livro.ano << endl;

    }

}
