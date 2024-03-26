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
    ll ans = 0;
    ll sum = 0;
    while (r < n)
    {
        sum+=arr[r];
        
        while(sum>=k){
            sum-=arr[l];
            l++;
        }
        // cout<<l<<" ";
        ans+=l;

       r++;
    }

    cout << ans << endl;
    return 0;
}