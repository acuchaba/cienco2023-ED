#include <iostream>

using namespace std;

int main(){
    float idade;

    cout << "Insira a idade do nadador: \n";
    cin >> idade;

    if(idade <= 4){
        cout << "O nadador nao faz parte de nenhuma categoria";
    }
    else if(idade >= 5 && idade <= 7){
        cout << "O nadador e da categoria infantil A.\n";
    }
    else if(idade >= 8 && idade <= 10){
        cout << "O nadador e da categoria infantil B.\n";
    }
    else if(idade >= 11 && idade <= 13){
        cout << "O nadador e da categoria juvenil A.\n";
    }
    else if(idade >= 14 && idade <= 17){
        cout << "O nadador e da categoria juvenil B.\n";
    }
    else{
        cout << "O nadador e da categoria senior";
    }
    return 0;
}
