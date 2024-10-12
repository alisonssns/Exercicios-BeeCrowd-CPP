using namespace std;
#include <iostream>

void checkLowest(int arr[], int n, int &menor, int &posicao) {
	menor = arr[0];
	posicao = 0;
	for(int j = 0; j < n ; j++) {
		if(arr[j] < menor){
		    menor = arr[j];
		    posicao = j;
		}
	};
}

int main()
{
	int x, num, menor,posicao;
	cin>>x;
	int arr[x];
	int size = sizeof(arr)/sizeof(int);
	for(int i = 0; i < size; i++) {
		cin>>num;
		arr[i] = num;
	};

	checkLowest(arr, size, menor, posicao);
	cout<<"Menor valor: "<<menor<<endl;
	cout<<"Posicao: "<<posicao<<endl;
	    return 0;
}