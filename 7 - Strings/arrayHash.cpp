#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n , r, hash;
	string text;
	cin >> n;
	for (int i = 0; i < n; i++) {
		hash = 0;
		cin>>r;
		for(int j = 0; j < r; j++) {
			cin>>text;
			for(int k = 0; k < text.size(); k++) {
				hash += ((text[k]-'A') + j + k);
			}
		}
		cout<<hash<<endl;
	}

	return 0;
}