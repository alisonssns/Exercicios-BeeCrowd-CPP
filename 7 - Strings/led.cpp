using namespace std;
#include <iostream>

int main()
{
    int nums[] = {6,2,5,5,4,5,6,3,7,6}, n, sum;
    string row;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>row;
        sum = 0;
        for(int j = 0; j < row.size(); j++){
            int k = row[j] - '0';
            sum += nums[k];
        }
        cout<<sum<<" leds"<<endl;
    }

    return 0;
}