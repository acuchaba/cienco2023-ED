/*Construir um programa para avaliar filmes, pedindo ao
usu�rio para avaliar diferentes aspectos como enredo, atua��o e
efeitos especiais. Calcule a m�dia das notas avaliadas em
enredo, atua��o e efeitos especiais. O programa deve permitir a
avalia��o de v�rios filmes. O programa deve parar quando
usu�rio n�o desejar mais continuar. */

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

        cout << "Digite a nota para a atua��o (0-5): ";
        cin >> filme.atuacao;

        cout << "Digite a nota para os efeitos especiais (0-5): ";
        cin >> filme.efeitosEspeciais;

        cout << "\nDeseja avaliar outro filme? (s/n): ";
        cin >> continuar;

        } while (continuar == 'S' || continuar == 's');

    double mEnredo = filme.enredo;
    double mAtuacao = filme.atuacao;
    double mEfeitosEspeciais = filme.efeitosEspeciais;

    cout << "\nM�dia das avalia��es:";
    cout << "\nEnredo: " << mEnredo << " Atuacao: " << mAtuacao << " Efeitos Especiais: " << mEfeitosEspeciais << endl;
}
