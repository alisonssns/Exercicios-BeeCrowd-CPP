#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, r;
    string text;
    cin >> n;

    for (int i = 0; i < n; i++) {
    cin>>text>>r;
       for(int j = 0; j < text.size(); j++){
           text[j] -= r;
           if(text[j] < 'A'){
               text[j]+=('Z'-'A'+ 1);
           }
       }
       cout<<text<<endl;
    }

    return 0;
}