#include <iostream>
#include <iomanip>
using namespace std;

void somaMatriz(double matriz[3][3]) {
    double sum = 0;
    int rep = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 1+rep; j < 3; j++){
        sum += matriz[i][j];
        }
        rep++;
    }
    cout << fixed << setprecision(1) << sum << endl;
}

void mediaMatriz(double matriz[3][3]) {
    double sum = 0;
    int rep = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 1+rep; j < 3; j++){
        sum += matriz[i][j];
        }
        rep++;
    }
    cout << fixed << setprecision(1) << sum / 3 << endl;
}

int main() {
    double matriz[3][3];
    string op;
    cin >> op;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    if(op == "M") {
        mediaMatriz(matriz);
    } else if(op == "S") {
        somaMatriz(matriz);
    }

    return 0;
}