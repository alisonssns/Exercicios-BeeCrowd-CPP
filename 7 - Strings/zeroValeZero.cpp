#include <iostream>
using namespace std;

int convertToNum(string str) {
	int num = 0;
	for(int i = 0; i < str.size(); i++) {
		num = num * 10 + (str[i] - '0');
	}
	return num;
}

string convertToString(int num){
    string result;
    while(num > 0){
    char digit = (num % 10) + '0';
    result = digit + result;
    num/=10;
    }
    return result;
}

int main(){

	string num1, num2, newNum, converted;
	int sum;
	cin>>num1>>num2;
	while(num1 != "0" || num2 != "0") {
	    converted = "";
		sum = convertToNum(num1) + convertToNum(num2);
		newNum = convertToString(sum);
		for(int i = 0; i < newNum.size(); i++){
		    if(newNum[i] != '0'){
		        converted+=newNum[i];
		    }
		}
		cout<<converted<<endl;
		cin>>num1>>num2;
	}


	return 0;
} 