#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, max;
	string text, converted;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		int letters[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}; //A B C D E F G H I J K L M N O P Q R T S U V W X Y Z
		max = 0;
		converted = "";
		
		getline(cin,text);
		
		for(int j = 0; j < text.size(); j++) {
            if(text[j] >= 'a' && text[j] <= 'z'){
                letters[text[j] - 'a']++;
            }
            if(text[j] >= 'A' && text[j] <= 'Z'){
                letters[text[j] - 'A']++;
            }
		}
		
		for(int j = 0; j < sizeof(letters)/sizeof(int); j++){
		    if(letters[j] > max){
		        max = letters[j];
		    }
		}
		
		for(int k = 0; k < sizeof(letters)/sizeof(int); k++){
		    if(letters[k] == max){
		        converted += (k + 'a');
		    }
		}

        cout<<converted<<endl;
	}

	return 0;
}