// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cmath>
// #include <climits>
// #include <vector>
// #include <map>
// #include <iomanip>
#include<bits/stdc++.h>

#define ll long long int

    using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int arr[n];
        map<ll, ll> cnt;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            cnt[__lg(x)]++;
        }
        long long ans = 0;
        for (auto [x, y] : cnt)
        {
            ans += (y * (y - 1)) / 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}