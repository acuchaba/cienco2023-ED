#include <iostream>
#include <locale>

using namespace std;

int main(){
    float horaTrab, salarioMin, valorHora, salarioBruto, imposto, salarioRec;


    cout << "Insira a quantidade de horas trabalhadas: ";
    cin >> horaTrab;

    cout << "Insira o valor do salario minimo: ";
    cin >> salarioMin;

    valorHora = salarioMin / 2;
    salarioBruto = horaTrab * valorHora;
    imposto = salarioBruto * 0.03;
    salarioRec = salarioBruto - imposto;


    cout << "O salario a receber e de: " << salarioRec;
}
