#include <iostream>
#include <locale>

using namespace std;

int main(){
    float pe, valorPag, parcelas;
    int cp;

    cout << "Entre com o valor lido na etiqueta: ";
    cin >> pe;

    cout << "Escolha a condicao de pagamento dentre os tais:\n " <<
    "1 - A vita com dinheiro ou no cheque, com 10% de desconto.\n" <<
    "2 - A vista com cartao de credito, com 5% de desconto.\n" <<
    "3 - Em duas vezes, preco normal de etiqueta sem juros.\n" <<
    "4 - Em tres vezes, preco de etiqueta com acrescimo de 10%.\n";

    cin >> cp;

    switch(cp){
        case 1: valorPag = pe - (pe * 0.1);
        cout << "O valor total a ser pago sera de "<< valorPag;
        break;

        case 2: valorPag = pe - (pe * 0.05);
        cout << "O valor total a ser pago sera de "<< valorPag;
        break;

        case 3: parcelas = pe / 2;
        cout << "O valor total a ser pago sera de " << pe << " com 2 parcelas de " << parcelas;
        break;

        case 4: valorPag = pe + (pe * 0.1);
        parcelas = valorPag / 3;
        cout << "O valor total a ser pago sera de " << valorPag << " com 3 parcelas de " << parcelas;
        break;
    }
}
