/*Construir um programa para avaliar filmes, pedindo ao
usuário para avaliar diferentes aspectos como enredo, atuação e
efeitos especiais. Calcule a média das notas avaliadas em
enredo, atuação e efeitos especiais. O programa deve permitir a
avaliação de vários filmes. O programa deve parar quando
usuário não desejar mais continuar. */

#include <iostream>
#include <locale>
#include <string.h>

using namespace std;


struct Filme
{
    string titulo;
    float enredo;
    float atuacao;
    float efeitosEspeciais;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Filme filme;

    char continuar;

    do
        {
        cout << "Digite o titulo do filme: ";
        getline(cin, filme.titulo);

        cout << "Digite a not apara o enredo (0-5): ";
        cin >> filme.enredo;

        cout << "Digite a nota para a atuação (0-5): ";
        cin >> filme.atuacao;

        cout << "Digite a nota para os efeitos especiais (0-5): ";
        cin >> filme.efeitosEspeciais;

        cout << "\nDeseja avaliar outro filme? (s/n): ";
        cin >> continuar;

        } while (continuar == 'S' || continuar == 's');

    double mEnredo = filme.enredo;
    double mAtuacao = filme.atuacao;
    double mEfeitosEspeciais = filme.efeitosEspeciais;

    cout << "\nMédia das avaliações:";
    cout << "\nEnredo: " << mEnredo << " Atuacao: " << mAtuacao << " Efeitos Especiais: " << mEfeitosEspeciais << endl;
}
