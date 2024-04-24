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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll mx=INT_MIN;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a[i]=x;
            mx=max(mx,x);
        }
        ll ansMx=LLONG_MIN;
        ll ansMn=LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            ll y=a[i];
            ll tm=(mx - a[i])/k;
             y=y + (tm*k);
             ll y1=y+k;

            // while(y<mx){
            //     y+=k;
            // }
            if(abs(y-mx) > abs(y1-mx)){
                y+=k;
            }
            cout<< y<<" ";
            // ansMn=min(ansMn,y);
            // ansMx=max(ansMx,y);
        }
        cout <<'\n';
    }
    return 0;
}