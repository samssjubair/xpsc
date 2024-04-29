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
        ll n;cin>>n;
        ll a[n + 2];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int ans = n;
        for (int i = 1; i <= n; i++)
        {
            set<int> st;
            st.insert(i);
            st.insert(a[i]);
            st.insert(a[a[i]]);
            ans= min(ans, int(st.size()));
        }
        cout<<ans<<endl;
    }
    return 0;
}