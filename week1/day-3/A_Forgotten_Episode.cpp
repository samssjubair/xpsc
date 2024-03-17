#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{

    // solve 1 


    // ll n;
    // cin>>n;
    // ll a[n-1];
    
    // for(ll i=0;i<n-1;i++){
    //     cin>>a[i];
    // }
    // ll ans = 1;
    // sort(a,a+n-1);
    // // for(ll i=0;i<n-1;i++){
    // //     cout<<a[i]<<" ";
    // // }

    // for(ll i=0;i<n-1;i++){
    //     if(a[i] == ans){
    //         ans++;
    //     }
    //     else{
    //         cout<<ans<<endl;
    //         break;
    //     }
    // }

    // solve 2
    ll n;
    cin>>n;
    bool a[n+1];
    memset(a,false,sizeof(a));
    for(ll i=0;i<n-1;i++){
        ll val;
        cin>>val;
        a[val]=true;
    }
    for(ll i=1;i<=n;i++){
        if(a[i]==false){
            cout<<i;
            break;
        }
    }

    return 0;
}