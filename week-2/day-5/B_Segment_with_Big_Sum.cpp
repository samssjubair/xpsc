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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        arr.push_back(temp);
    }
    ll l = 0, r = 0;
    ll ans = LONG_MAX;
    ll sum = 0;
    while (r < n)
    {
        sum += arr[r];
        while (sum >= k)
        {
            ans = min(ans, r - l + 1);
            sum -= arr[l];
            l++;
        }

        r++;
    }
    // cout << ans << endl;
    if(ans==LONG_MAX){
        cout<<-1<<endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}