using namespace std;
#include <iostream>

int main()
{
	int n;
	string text1, text2, msg;
	char temp;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>text1>>text2;
		msg = "encaixa";
		for(int i = 0; i < text2.size(); i++) {
			if((text1[text1.size() - text2.size() + i]) != text2[i]) {
				msg = "nao encaixa";
			}
		}
		cout<<msg<<endl;
	}



	return 0;
}