/*Implementar um programa para registrar pedidos em um
restaurante, coletando informações como o nome do prato,
quantidade e preço total. O programa deve continuar recebendo
novos pedidos até que um valor específico seja inserido como
preço */

#include <iostream>
#include <vector>
#include <string>
#include <locale>

using namespace std;

struct regPedido
{
    string prato;
    int quantidade;
    float preco;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    vector<regPedido> pedidos;
    regPedido pedido;

    do
    {
        cout << "Digite o nome do prato: ";
        cin >> pedido.prato;

        cout << "Digite a quantidade: ";
        cin >> pedido.quantidade;

        cout << "Digite o preco total: ";
        cin >> pedido.preco;

        cout << endl;

        if(pedido.preco != 0){
        pedidos.push_back(pedido);
        }
        cin.ignore();

    } while(pedido.preco != 0);

    for(const auto& p : pedidos)
        cout << "\nPrato: " << p.prato << ", Quantidade: " << p.quantidade << ", Preço: " << p.preco << endl;
}
