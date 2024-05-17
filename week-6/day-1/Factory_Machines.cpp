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

#define ll long long

using namespace std;

int main()
{

    ll n,t;
    cin>>n>>t;
    // ll a[n];
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    auto ok = [&](ll m){
        ll total=0;
        for(int i=0;i<n;i++){
            total+=(m/a[i]);
            if(total>=t){
                return true;
            }
        }
        return false;
    };

    long long l=1, r=1e18,mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        } 
    }
    cout << ans << endl;
    return 0;
}