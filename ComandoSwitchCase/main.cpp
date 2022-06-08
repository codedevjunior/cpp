#include <iostream>

using namespace std;

int main(){

    int op;

    cout << "1. Cadastrar \n 2. Relatorio \n 3. Sair";
    cin >> op;

    switch (op){

    case 1:
        cout << "Acessando cadastrar";
        break;
    case 2:
        cout << "Acessando relatorio";
        break;
    case 3:
        cout << "Saindo do sistema";
        break;
    default:
        cout << "Opcao invalida";
        break;

    }

    return 0;
}
