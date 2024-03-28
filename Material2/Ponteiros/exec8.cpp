#include <iostream>
#include <locale>

using namespace std;

#define TAM 5

int main()
{
    int a[TAM];
    int *ptr = a;

    for(int i = 0; i < TAM; i++)
    {
        cout << "Insira o " << i + 1 << "o numero.\n";
        cin >> *(ptr + i);
    }

    int soma = 0;

    for(int i = 0; i < TAM; i++)
    {
        soma += *(ptr + i);
    }

    float media = (soma) / TAM;

    cout << "A media dos numeros e: \n" << media;
}
