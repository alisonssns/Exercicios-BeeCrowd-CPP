#include <iostream>
#include <iomanip>
using namespace std;

void somaMatriz(double matriz[12][12], int C) {
    double sum = 0;
    for(int i = 0; i < 12; i++) {
        sum += matriz[i][C];
    }
    cout << fixed << setprecision(1) << sum << endl;
}

void mediaMatriz(double matriz[12][12], int C) {
    double sum = 0;
    for(int i = 0; i < 12; i++) {
        sum += matriz[i][C];
    }
    cout << fixed << setprecision(1) << sum / 12 << endl;
}

int main() {
    double matriz[12][12];
    int C;
    string op;
    cin >> C >> op;

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    if(op == "M") {
        mediaMatriz(matriz, C);
    } else if(op == "S") {
        somaMatriz(matriz, C);
    }

    return 0;
}