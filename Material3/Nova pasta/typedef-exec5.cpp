#include <iostream>
#include <locale>

using namespace std;

typedef enum{AZUL, VERDE, VERMELHO, AMARELO, PRETO, BRANCO} TipoCor;


int main(){
    setlocale(LC_ALL, "Portuguese");
    int cores;

    cout << "Escolha uma cor entre: \n";
    cout << "1 - AZUL\n";
    cout << "2 - VERDE\n";
    cout << "3 - VERMELHO\n";
    cout << "4 - AMARELO\n";
    cout << "5 - PRETO\n";
    cout << "6 - BRANCO\n";
    cin >> cores;

    TipoCor cor;

    if(cores >= 1 && cores <= 6){
        cor = static_cast<TipoCor>(cores - 1);
    } else {
        cout << "Cor inexistente.";
        return 1;
    }

    cout << "Sua cor é: ";
    switch(cor){
        case AZUL: cout << "AZUL!"; break;
        case VERDE: cout << "VERDE!"; break;
        case VERMELHO: cout << "VERMELHO!"; break;
        case AMARELO: cout << "AMARELO!"; break;
        case PRETO: cout << "PRETO!"; break;
        case BRANCO: cout << "BRANCO!"; break;
        }
}
