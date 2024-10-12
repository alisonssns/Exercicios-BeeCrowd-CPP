using namespace std;
#include <iostream>

int main()
{
    int n;
    string text;
    char temp;
    cin>>n;
    getchar();
    for(int i = 0; i < n; i++){
        getline(cin, text);
        for(int j = 0; j < text.size(); j++){
            if((text[j] >= 'A' && text[j] <= 'Z') || (text[j] >= 'a' && text[j] <= 'z')){
                text[j]+=3;
            }
        }
        for(int j = 0; j < text.size()/2; j++){
            temp = text[j];
            text[j] = text[text.size() - 1 - j];
            text[text.size() - 1 - j] = temp;
        }
        for(int k = text.size()/2; k < text.size(); k++){
            text[k] -= 1;
        }
        cout<<text<<endl;
    }
    


    return 0;
}