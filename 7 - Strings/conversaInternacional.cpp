using namespace std;
#include <iostream>

int main()
{
	string lingua1, linguaAlt;
	int n, m;
	bool dif;
	cin>>n;
	getchar();
	for(int i = 0 ; i < n; i++) {
	    dif = false;
		cin>>m;
		cin>>lingua1;
		for(int k = 1; k < m; k++) {
			cin>>linguaAlt;
			if(linguaAlt != lingua1) {
				dif = true;
			}
		}
		if(dif){
		    cout<<"ingles"<<endl;
		}else{
		    cout<<lingua1<<endl;
		}
	}

	return 0;
}