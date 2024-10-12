using namespace std;
#include <iostream>

int main()
{
	int n, max, dif;
	cin>>n;
	while(n != 0) {
    string nomes[n];
		for(int i = 0; i < n; i++) {
			cin>>nomes[i];
		}
		max = nomes[0].size();
		for(int j = 0; j < n; j++) {
			if(nomes[j].size() > max){
			    max = nomes[j].size();
			}
		}
		for(int k = 0; k < n; k++){
		    dif = max - nomes[k].size();
		    for(int l = 0; l < dif; l++){
		        nomes[k] = ' '+nomes[k];
		    }
		    cout<<nomes[k]<<endl;
		}
		cin>>n;
		if(n!= 0){
		cout<<""<<endl;
		}
	}

	return 0;
}