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

    ll n, k;
    cin >> n >> k;
    // ll a[n];
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    auto ok = [&](ll mid)
    {
        ll total = 0;
        for (int i = n/2; i < n; i++)
        {
            total += (a[i]<mid ? mid-a[i] : 0);
            
        }
        return total <=k;
    };

    long long l = 1, r = 2e9, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}