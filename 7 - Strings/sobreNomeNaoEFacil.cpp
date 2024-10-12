using namespace std;
#include <iostream>

int main()
{
	int n, sum;
	string sobrenome;
	bool facil;
	cin>>n;
	for(int i = 0; i < n; i++) {
		facil = true;
		sum = 0;
		cin>>sobrenome;
		sobrenome[0] = sobrenome[0] - ('A'-'a');
		for(int j = 0; j < sobrenome.size(); j++) {
			if(sobrenome[j] != 'a' && sobrenome[j] != 'e' && sobrenome[j] != 'i' && sobrenome[j] != 'o' && sobrenome[j] != 'u') {
				sum++;
				if(sum == 3) {
					facil = false;
					break;
				}
			} else {
				sum = 0;
			}
		}
        sobrenome[0] = sobrenome[0] + ('A'-'a');
		string mensagem = facil ? sobrenome+" eh facil" : sobrenome+" nao eh facil";
		cout<<mensagem<<endl;
	}

	return 0;
}