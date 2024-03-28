#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    ll n,k;cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    multiset<ll> ms;
    ll l=0,r=0,ans=0;
    while(r<n){
        ms.insert(a[r]);
        ll min=*ms.begin();
        ll mx=*ms.rbegin();
        if(mx-min<=k){
            ans+=(r-l+1);
        }else{
            while(l<r){
                 min = *ms.begin();
                 mx = *ms.rbegin();
                 if((mx-min)<=k){
                    break;
                 }
                 auto it=ms.find(a[l]);
                 ms.erase(it);
                 l++;
            }
            min = *ms.begin();
            mx = *ms.rbegin();
            if (mx - min <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}