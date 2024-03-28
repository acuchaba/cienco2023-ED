/*Criar um programa que registre informa��es de v�rios
pacientes, incluindo nome, idade e um sintoma espec�fico.
O programa deve permitir a entrada de dados para m�ltiplos
pacientes at� que o usu�rio decida parar.*/

#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

struct Paciente
{
    string nome;
    int idade;
    string sintoma;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char continuar = 's';
    Paciente paciente;

    while(continuar == 's' || continuar == 'S')
    {

        cout << "Qual o nome do paciente? ";
        getline(cin, paciente.nome);

        cout << "\nQual sintoma o paciente est� sentindo? ";
        getline(cin, paciente.sintoma);

        cout << "\nQual a idade do paciente? ";
        cin >> paciente.idade;

        cout << "Paciente: " << paciente.nome << " - Sintoma: " << paciente.sintoma << " - Idade: " << paciente.idade << endl;

        cout << "\nDeseja adcionar mais pacientes? (s/n): ";
        cin >> continuar;

        cout << endl;

        cin.ignore();
    }
}
