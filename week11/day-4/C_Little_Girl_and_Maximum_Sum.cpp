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

    int n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    vector<int> d(n+1);
    for(int i=1;i<=q;i++)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        d[l]++;
        d[r+1]--;

    }

    for(int i=1;i<=n;i++)
        d[i]+=d[i-1];

    sort(a.rbegin(),a.rend());
    sort(d.rbegin(),d.rend());

    ll ans=0;
    for(int i=0;i<n;i++)
        ans+=(1LL * a[i]*d[i]);

    cout<<ans<<endl;
    return 0;
}