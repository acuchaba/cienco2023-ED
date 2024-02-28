#include <iostream>
#include <locale>

using namespace std;

int main(){
    float salarioAtual, salarioNovo;

    cout << "Insira o seuu salario atual: ";
    cin >> salarioAtual;

    if(salarioAtual < 1000){
        salarioNovo = salarioAtual + (salarioAtual * 0.15);
        cout << salarioNovo;
    }
    else if(salarioAtual >= 1000 && salarioAtual <= 1500){
        salarioNovo = salarioAtual + (salarioAtual * 0.1);
        cout << salarioNovo;
    }
    else{
        salarioNovo = salarioAtual + (salarioAtual * 0.05);
        cout << salarioNovo;
    }

}
