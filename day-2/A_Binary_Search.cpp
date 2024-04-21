#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
ll n;
ll a[100005];

bool search(ll k){
    ll l=0;
    ll r=n-1;
    ll mid;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==k){
            return true;
        }else if(k<a[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return false;
}
int main()
{
    ll k;cin>>n>>k;
    a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<k;i++){
        ll n;cin>>n;
        cout<<(search(n)? "YES": "NO")<<endl;;
    }
    
    return 0;
}