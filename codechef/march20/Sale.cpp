#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#include<limits.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            ll val;cin>>val;
            a[i]=val;
        }
        ll maxSale=INT_MIN;
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=2*a[i];
            if(maxSale<sum){
                maxSale=sum;
            }
            sum-=a[i];
        }
        cout<<maxSale<<endl;
    }
    return 0;
}