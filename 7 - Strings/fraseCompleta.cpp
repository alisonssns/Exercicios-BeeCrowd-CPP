#include <iostream>
using namespace std;

int main()
{
	string frase;
	int n;
	cin>>n;
	getchar();
	for(int i = 0 ; i < n; i++) {
		int sum = 0;
		int alpha[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
		getline(cin,frase);
		for(int j = 0; j < frase.size(); j++) {
			alpha[frase[j] - 'a']++;
		}

		for(int k = 0; k < 26; k++){
		    if(alpha[k] > 0){
		        sum++;
		    }
		}
		
		if(sum == 26){
		    cout<<"frase completa"<<endl;
		}else if(sum >= 13){
		    cout<<"frase quase completa"<<endl;
		}else{
		    cout<<"frase mal elaborada"<<endl;
		}
	}

return 0;
}