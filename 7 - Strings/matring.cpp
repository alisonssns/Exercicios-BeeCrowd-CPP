#include <iostream>
using namespace std;

int main()
{   
    
    string n, F="", L="", Mi, converted;
    cin>>n;
    string matrix[4][n.size()];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < n.size(); j++){
            matrix[i][j] = n[j];
        }
        cin>>n;
    }

    for(int i = 0; i < 4; i++){
        F+=matrix[i][0];
        L+=matrix[i][n.size()-1];
    }

    converted = "";
    for(int i = 1; i < n.size()-1; i++){
        Mi = "";
        for(int j = 0; j < 4; j++){
            Mi += matrix[j][i];
        }
        converted += ((stoi(F)*stoi(Mi))+stoi(L))%257;
    }
    cout<<converted<<endl;
    
    return 0;
}