#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            // ll sum = 0;
            ll noOfOdd = 0;
            for (ll i = 0; i < n; i++)
            {
                if (i + 1 >= l && i + 1 <= r)
                {
                    // sum+=k;
                    if (k % 2 == 1)
                    {
                        noOfOdd++;
                    }
                }
                else
                {
                    // sum+=a[i];
                    if (a[i] % 2 == 1)
                    {
                        noOfOdd++;
                    }
                }
            }
            cout << (noOfOdd % 2 == 0 ? "NO" : "YES") << endl;
        }
    }
    return 0;
}