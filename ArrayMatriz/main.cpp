#include <iostream>

using namespace std;

int main()
{
    int matriz[3][4];

    for(int i=0; i<3; i++){
        for(int c=0; c<4;c++){
            matriz[i][c]=i;
        }
    }


    for(int i=0; i<3; i++){
        for(int c=0; c<4;c++){
            cout << matriz[i][c];
        }

        cout << "\n";
    }


    return 0;
}
