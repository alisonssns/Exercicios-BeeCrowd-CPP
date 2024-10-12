#include <iostream>
using namespace std;

int convertToNum(string str) {
	int num = 0;
	for(int i = 0; i < str.size(); i++) {
		num = num * 10 + (str[i] - '0');
	}
	return num;
}

int main()
{
    int n, sum;
    string text, nums;
    bool isnum = false;
    cin>>n;
    for(int i = 0; i < n; i++){
        nums = "";
        sum = 0;
        cin>>text;
        for(int j = 0; j < text.size(); j++){
            if(text[j] >= '0' && text[j] <= '9'){
                isnum = true;
                nums += text[j];
            }
            
            if(isnum){
                if(text[j] < '0' || text[j] > '9'){
                    isnum = false;
                    sum += convertToNum(nums);
                    nums = "";
                }
            }
            
        }
        
        if(nums.size() > 0){
            sum+=convertToNum(nums);
        }
        
        cout<<sum<<endl;
    }
    
    
	return 0;
}