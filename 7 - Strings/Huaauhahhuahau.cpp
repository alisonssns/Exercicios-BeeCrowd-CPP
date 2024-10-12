#include <iostream>
using namespace std;

int main()
{
    string risa, risaVog = "", inverted = "";
    char vogais[5]={'a','e','i','o','u'};
    cin>>risa;
    for(int i =0 ; i < risa.size(); i++){
        for(int j = 0; j < 5; j++){
            if(risa[i] == vogais[j]){
                risaVog+=risa[i];
            }
        }
    }
    
    for(int i = risaVog.size() - 1; i >= 0; i--){
        inverted += risaVog[i];
    }
    
    char result = risaVog == inverted? 'S': 'N';
    
    cout<<result<<endl;
    
	return 0;
}