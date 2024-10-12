#include <iostream>
#include <iomanip>
using namespace std;

void somaMatriz(double matriz[12][12]) {
    double sum = 0;
    int rep = 0;
    for(int i = 0; i < 11; i++) {
        for(int j = 1+rep; j < 12; j++){
        sum += matriz[i][j];
        }
        rep++;
    }
    cout << fixed << setprecision(1) << sum << endl;
}

void mediaMatriz(double matriz[12][12]) {
    double sum = 0;
    int rep = 0, qt = 0;
    for(int i = 0; i < 11; i++) {
        for(int j = 1+rep; j < 12; j++){
        sum += matriz[i][j];
        qt++;
        }
        rep++;
    }
    cout << fixed << setprecision(1) << sum / qt << endl;
}

int main() {
    double matriz[12][12];
    string op;
    cin >> op;

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
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