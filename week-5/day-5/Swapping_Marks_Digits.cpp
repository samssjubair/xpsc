#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int rev(int n){
    int res=0;
    while(n){
        res+=n%10;
        n/=10;
        if(n){
            res *= 10;
        }
        
    }
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        // cout<<rev(a)<<endl;
        int revA=rev(a);
        int revB=rev(b);
        if(a>b | revA>revB | a>revB | revA> b ){
            cout<<"Yes"<<endl;
        }else{
            cout << "No" << endl;
        }

    }

    return 0;
}