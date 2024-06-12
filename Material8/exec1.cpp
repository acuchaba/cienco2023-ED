    #include <iostream>
    #include <list>
    #include <iterator>

    using namespace std;

    void imprimiLista(const list<int>& lista)
    {
        list<int>::const_iterator elemento;
        if (lista.empty())
        {
            cout << "Lista vazia\n";
        }
        else
        {
            elemento = lista.begin();
            do
            {
                cout << *elemento << " ";
                elemento++;
            }while (elemento != lista.end());
            cout << endl;
        }
    }
    int main ()
    {

        list<int> lista;
        int num1, num2, num3, num4, num5;

        cout <<"Entre com o primeiro valor da lista: " << endl;
        cin >> num1;
        lista.push_back(num1);


        cout <<"Entre com o segundo valor da lista: " << endl;
        cin >> num2;
        lista.push_back(num2);


        cout <<"Entre com o terceiro valor da lista: " << endl;
        cin >> num3;
        lista.push_back(num3);


        cout <<"Entre com o quarto valor da lista: " << endl;
        cin >> num4;
        lista.push_back(num4);


        cout <<"Entre com o quinto valor da lista: " << endl;
        cin >> num5;
        lista.push_back(num5);
        cout << endl;

            imprimiLista(lista);
            lista.reverse();
            imprimiLista(lista);

    }
