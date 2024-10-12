#include <iostream>
#include <iomanip>
using namespace std;

void somaMatriz(double matriz[12][12]) {
    double sum = 0;
    int min = 12, max = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = min ; j < max; j++){
        sum += matriz[i][j];
        }
        min--;
        max++;
    }
    cout << fixed << setprecision(1) << sum << endl;
}

void mediaMatriz(double matriz[12][12]) {
    double sum = 0;
    int min = 12, max = 0, qt = 0;
    for(int i = 0 ; i < 12; i++) {
        for(int j = min ; j < max; j++){
        sum += matriz[i][j];
        qt++;
        }
        min--;
        max++;
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