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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    
    int l=0,r=0;
    pbds<pair<int,int>> p;

    while(r<n){
        p.insert({arr[r],r});
        if(r-l+1==k){
            int mid=k/2;
            if(k%2==0){
                mid--;
            }
            auto it= p.find_by_order(mid);
            cout << it->first << " ";
            p.erase({arr[l],l});
            l++;
        }
        r++;
    }
    return 0;
}