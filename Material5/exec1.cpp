#include <iostream>

using namespace std;

void quickSort(int vetor[10], int inicio, int fim)
{
    int pivo, esq, dir, meio, aux;
    esq = inicio;
    dir = fim;

    meio = (int) ((esq + dir) / 2);
    pivo = vetor[meio];

    while(dir > esq){
        while(vetor[esq] < pivo){
            esq++;
        }

        while(vetor[dir] > pivo){
            dir--;
        }

        if(esq <= dir){
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            esq++;
            dir--;
        }

    }

    if(inicio < dir){
        quickSort(vetor, inicio, dir);
    }
    if(esq < fim){
        quickSort(vetor, esq, fim);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10];

    for(int i = 0; i < 10; i++){
        cout << "Digite um número: ";
        cin >> vetor[i];
    }

    quickSort(vetor, 0, 10);

    int maior = vetor[0], menor = vetor[0], qtdMaior = 0, qtdMenor = 0;

    for(int i = 1; i < 10; i++)
    {
        if(maior < vetor[i]){
            maior = vetor[i];
        }
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }

    for(int i = 0; i < 10; i++)
    {
        if(maior == vetor[i])
        {
            qtdMaior++;
        }
        if(menor == vetor[i]){
            qtdMenor++;
        }
    }

    cout << "O maior número é: " << maior << ", e ele aparece " << qtdMaior << " vezes \n"
            "O menor número é: " << menor << ", e ele aparece " << qtdMenor << " vezes" << endl;

    cout << endl;

    for(int i = 0; i < 10; i++){cout << vetor[i] << " ";}



}

