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
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int res=x;
        while(y--){
            // int op1= x*2;
            // int op2= x+1000;
            res=max(res*2,res+1000);
            // res+=max(op1,op2);
        }
        cout<<res<<endl;
    }
    return 0;
}