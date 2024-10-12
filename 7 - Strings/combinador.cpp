#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string text1, text2, converted;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin>>text1>>text2;
        converted = "";
        if(text1.size() > text2.size()){
            for(int j = 0; j < text2.size(); j++){
                converted += text1[j];
                converted += text2[j];
            }
            for(int k = text2.size(); k < text1.size(); k++){
                converted += text1[k];
            }
        }else{
            for(int j = 0; j < text1.size(); j++){
                converted += text1[j];
                converted += text2[j];
            }
            for(int k = text1.size(); k < text2.size(); k++){
                converted += text2[k];
            }
        }
        
        cout<<converted<<endl;
    }

    return 0;
}
