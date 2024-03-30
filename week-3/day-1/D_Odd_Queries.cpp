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
        ll pref[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];

        }
        pref[0]=a[0];
        for (ll i = 1; i < n; i++)
        {
            // cin >> a[i];
            pref[i]=pref[i-1]+a[i];
        }
        

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sumOfK=(r-l+1)*k;
            // cout<<sumOfK<<" ";
            // cout<<endl;
            // cout<<l-2<<" "<<a[l-2]<<endl;
            ll sum;
            if(l>1){
                sum = pref[n - 1] + sumOfK - (pref[r - 1] - pref[l - 2]);
            }else{
                sum = pref[n - 1] + sumOfK - (pref[r - 1] );
            }
            // cout<<sum<<endl;
            cout << (sum % 2 == 0 ? "NO" : "YES") << endl;
        }
    }
    return 0;
}