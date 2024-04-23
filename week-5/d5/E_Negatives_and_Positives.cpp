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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        ll sum=0;
        ll noOfNeg=0;
        ll mn=LLONG_MAX;
        for(ll i=0;i<n;i++){
            ll x;
            cin >> x;
            if(x<0){
                noOfNeg++;
            }
            
            a[i]=x;
            sum+=abs(x);
            mn=min(mn,abs(x));
        }
        // cout<<mn<<noOfNeg<<sum<<endl;
        
        if(noOfNeg%2){
            cout<<sum-(2*mn)<<endl;
        }else{
            cout<<sum<<endl;
        }
    }
    return 0;
}