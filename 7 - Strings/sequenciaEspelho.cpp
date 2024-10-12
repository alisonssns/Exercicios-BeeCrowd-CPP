#include <iostream>
using namespace std;

int convertToNum(string str) {
	int num = 0;
	for(int i = 0; i < str.size(); i++) {
		num = num * 10 + (str[i] - '0');
	}
	return num;
}

string convertToString(int num) {
	string result;
	while(num > 0) {
		char digit = (num % 10) + '0';
		result = digit + result;
		num/=10;
	}
	return result;
}

int main()
{
	int n,num1,num2;
	string numbers;
	cin>>n;
	for(int i = 0; i < n; i++) {
		numbers = "";
		cin>>num1>>num2;
		for(int j = num1; j<= num2; j++) {
			numbers += convertToString(j);
		}
		for(int j = numbers.size()-1; j >= 0; j--) {
			numbers += numbers[j];
		}

		cout<<numbers<<endl;
	}

	return 0;
}