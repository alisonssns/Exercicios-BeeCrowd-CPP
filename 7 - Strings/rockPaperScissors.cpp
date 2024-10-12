#include <iostream>
using namespace std;

string determinarvencedor(string rajesh, string sheldon) {
	if(rajesh == sheldon) {
		return "empate";
	}

	if(
	    (rajesh == "pedra" && (sheldon == "lagarto" || sheldon == "tesoura")) ||
	    (rajesh == "papel" && (sheldon == "pedra" || sheldon == "spock")) ||
	    (rajesh == "tesoura" && (sheldon == "papel" || sheldon == "lagarto")) ||
	    (rajesh == "lagarto" && (sheldon == "papel" || sheldon == "spock")) ||
	    (rajesh == "spock" && (sheldon == "pedra" || sheldon == "tesoura"))
	) {
		return("rajesh");
	}
	else {
		return("sheldon");
	}

}

int main()
{
	int n;
	string escSh,escRa;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>escRa>>escSh;
		string vencedor = determinarvencedor(escRa,escSh);
        cout<<vencedor<<endl;
	}

	return 0;
}