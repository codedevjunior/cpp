#include <iostream>

using namespace std;

#define NOTA_MAXIMA cout << "Parabéns você passou com nota maxima";
#define NOTA_BOA cout << "Parabens você passou";
#define NOTA_BAIXA cout << "Voce ficou em recuperação";
#define REPROVADO cout << "Voce reprovou";

int main(){

    int n1, n2, res;
    char opc;

    inicio:

    cout << "Digite o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = (n1 + n2) / 2;

    if(res >= 50) {
        if(res >= 60){
            if(res >=9){
                NOTA_MAXIMA
            }else {
                NOTA_BOA
            }
        }else {
            NOTA_BAIXA
        }
    } else {
        REPROVADO
    }

    cout << "Deseja outras notas? [s/n]: ";
    cin >> opc;

    if(opc == 's' or opc == 'S') {
        goto inicio;
    }

    return 0;
}
