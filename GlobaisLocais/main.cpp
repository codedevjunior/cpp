#include <iostream>
using namespace std;

int n1, n2; //variaveis globais

int main(){

    //Operadores Matemáticos: + - / * % ()

    int n3, n4; //variaveis locais
    int res;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res=(n1+n2+n3+n4)-10;

    cout << "A soma de todas as variaveis: " << res << "\n";

    return 0;
}
