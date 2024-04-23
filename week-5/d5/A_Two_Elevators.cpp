#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        // int ans;
        ll x = (abs(b-c) + (c));
         if(a <x)
        {
            cout<<1;
        }
        else if(a>x){
            cout << 2;
        }else{
            cout << 3;
        }
        cout<<'\n';
    }
    return 0;
}