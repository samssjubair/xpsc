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
        int n;ll x;
        cin>>n>>x;
        vector<ll> a;
        for(int i=0;i<n;i++){
            ll in;cin>>in;
            // cin>>a[i];
            a.push_back(in);
        }
        sort(a.begin(),a.end());

        auto ok= [&](ll mid){
            ll total=0;
            for(int i=0;i<n;i++){
                if(a[i]<mid){
                    total += (mid-a[i]);
                }
            }
            return total<=x;
        };

        ll l=1,r=1e12,mid,ans;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}