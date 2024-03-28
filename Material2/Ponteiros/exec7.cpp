
#include <iostream>
#include <locale>

using namespace std;

#define TAM 10

int main()
{
    int vet[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite o " << i + 1 << "o valor inteiro: \n";
        cin >> vet[i];
    }

    cout << "\nConteudo do vetor na ordem normal: \n";
    int *ptr = vet;
    for (int i = 0; i < TAM; i++)
    {
        cout << *ptr << " ";
        ++ptr;
    }

    cout << endl;

    cout << "\nConteudo do vetor na ordem inversa: \n";

    ptr = vet + TAM - 1;

    for (int i = 0; i < TAM; i++)
    {
        cout << *ptr << " ";
        --ptr;
    }

    cout << endl;
    
}
