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
        int n;cin>>n;
        vector<int> arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }


        int ans= 1e6;
        // for (auto i : mp)
        // {
        //     if (i.second > max_count)
        //     {
        //         max_count = i.second;
        //         max_num = i.first;
        //     }
        // }
        // for (auto &[it, cnt] : mp)
        // {
        //     int rs = 0;
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (arr[i] != it)
        //         {
        //             // rs++;
        //             rs = rs + it;
        //         }
        //     }
        //     ans = min(ans, rs);
        // }

        for (auto &[item, cnt] : mp)
        {
            int tt = n - cnt;
            ans = min(ans,tt * item);
        }
        // cout<<ans<<endl;
        cout<<(ans>n?n:ans)<<endl;
    }
    return 0;
}