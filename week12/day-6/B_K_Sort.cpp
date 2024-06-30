#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <climits>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <utility>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll res=0;
        ll vr=0;
        for(ll i=1;i<n;i++){
            if(a[i]<a[i-1]){
                res+=a[i-1]-a[i];
                vr=max(vr, a[i-1]-a[i]);
                a[i]=a[i-1];
                // break;
            }
        }
        res+=vr;
        cout<<res<<endl;
    }
    return 0;
}