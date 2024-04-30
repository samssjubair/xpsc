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
        ll n,q;
        cin>>n>>q;
        ll a[n], query[q]; 
        vector<ll> preSum(n);
        vector<ll> preMax(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> query[i];
        }
        preSum[0]=a[0];
        preMax[0]=a[0];
        for (int i = 1; i < n; i++)
        {
            preSum[i]= preSum[i-1]+a[i];
            preMax[i] = max(preMax[i - 1] , a[i]);
        }
        
        for (int i = 0; i < q; i++)
        {
            auto x=upper_bound(preMax.begin(), preMax.end(),query[i])-preMax.begin();
            // cout<<x<<endl;
            if(x==0){
                cout<<0<<" ";
            }
            else {
                cout<<preSum[x-1]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}