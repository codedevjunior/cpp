#include <iostream>

using namespace std;

int main()
{
    int vetor[10];

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;

    for(int i=0; i<4; i++){
        cout << "Vetores: " << vetor[i] << "\n";
    }

    return 0;
}
