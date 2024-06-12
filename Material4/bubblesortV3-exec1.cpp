#include <iostream>
#include <locale>

using namespace std;

void imprimeVetor();

void bubbleSort(int vetor[]){
	int n = 1 ;
	int troca = 1;
	int aux = 0;
	while (n <= 5 && troca == 1){
		troca = 0;
		for (int i = 0; i <= 3; i++){
			if (vetor[i] < vetor[i + 1]){
				troca = 1;
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
			}
		}
		n++;
	}

}

int main(){
    setlocale(LC_ALL, "Portuguese");

	int vetor[5];

	for (int i = 0; i <= 4; i++){
		cout << "Digite o número: " << endl;
		cin >> vetor[i];
	}

    imprimeVetor(vetor);
    cout << endl;
	bubbleSort(vetor);
    imprimeVetor(vetor);
}
void imprimeVetor(){
    for (int i = 0; i < 5; i++){
        cout << " " << vetor[i] << " ";
    }
}
