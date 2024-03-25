#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int mul=n*m;
        int cnt=0;
        int firstDigit;
        // cout<<mul<<endl;
        while(mul>0){
            cnt++;
            firstDigit=mul%10;
            mul/=10;
        }
        if(cnt==5 && firstDigit!=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}