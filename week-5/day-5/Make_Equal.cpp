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
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        ll first,last, other;
        for(ll i=0;i<n;i++){
            // ll x;
            cin>>a[i];
            // a[i]=x;
            // if(i=0){
            //     first=x;
            // }else if(i==n-1){
            //     last=x;
            // }
        }
        first=a[0];
        last=a[n-1];
        bool flag=true;
        for(ll i=1;i<n-1;i++){
            if (a[i] < first || a[i] < last){
                flag=false;
                break;
            }
        }
        if(first!=last){
            cout<< "NO"<<endl;
            continue;
        }
        cout<<(flag ? "YES": "NO")<<endl;


    }
    return 0;
}