#include <iostream>
#include <locale>

using namespace std;

typedef int VetorInteiros[5];

int main(){
    srand(time(NULL));

    VetorInteiros vetor;

    for (int i = 0; i < 5; i++) {
        vetor[i] = rand() % 10;
    }

    cout << "Valores do vetor:\n";

    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
}
