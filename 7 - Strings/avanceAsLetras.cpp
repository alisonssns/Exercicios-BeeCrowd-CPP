#include <iostream>
using namespace std;

int main()
{
    string A,B;
    int n, sum;
    cin>>n;
    for(int i = 0; i < n; i++){
        sum = 0;
        cin>>A>>B;
        for(int j = 0; j < A.size(); j++){
            while(A[j]!=B[j]){
                A[j]++;
                sum++;
                if(A[j] > 'z'){
                    A[j]-=('z'-'a' + 1);
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}