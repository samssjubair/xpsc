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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int ans = 0;
        int t = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (t >= a[i])
            {
                break;
            }
            t += (n - a[i]);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}