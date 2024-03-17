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
    ll t;cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > i + 1+ans)
            {
                 ans = a[i] - (i + 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

