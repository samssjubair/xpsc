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

    ll n,x,y;
    cin>>n>>x>>y;
    ll l=0,r=max(x,y)*n,mid,ans;

    auto ok=[&](ll mid){
        mid-=min(x,y);
        ll c=1;
        c+=(mid/x+mid/y);
        return c>=n; 
    };

    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}