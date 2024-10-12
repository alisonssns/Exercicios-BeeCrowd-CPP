using namespace std;
#include <iostream>

void telefone(string frase, string tentativa, int &timeT, int errQ[]) {
	for(int j = 0; j < frase.size(); j++) {
		if(frase[j] == tentativa[j]) {
			timeT++;
		} else {
			errQ[j] = 1;
		}
	}
}

int main()
{
	string frase, tentativa;
	int n, time1, time2;
	cin>>n;
	getchar();
	for(int i = 1; i <= n; i++) {
	    bool empt = true;
		time1 = 0;
		time2 = 0;

		getline(cin,frase);
	    int err1[frase.size()] = {}, err2[frase.size()] = {};
		getline(cin,tentativa);
		telefone(frase,tentativa,time1,err1);
		getline(cin,tentativa);
		telefone(frase,tentativa,time2,err2);

		cout<<"Instancia "<<i<<endl;
		if(time1 > time2) {
			cout<<"time 1"<<endl;
		} else if(time2 > time1) {
			cout<<"time 2"<<endl;
		} else {
		    for(int i = 0; i < sizeof(err1)/sizeof(int); i++){
		        if(err1[i] == 1 && err2[i] != 1){
		            cout<<"time 2"<<endl;
		            empt = false;
		            break;
		        }else if(err1[i] != 1 && err2[i] == 1){
		            cout<<"time 1"<<endl;
		            empt = false;
		            break;
		        }
		    }
		    if(empt){
		        cout<<"empate"<<endl;
		    }
			
		}

			cout<<""<<endl;
	}


	return 0;
}