#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>
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

int lcm(int a, int b){
    return a*b/__gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> a(n);
        map<ll, int> mp;

        for(int i=0;i<n;i++) {
            ll x;
            cin>>x;
            a[i]=x;
            mp[x]++;
        }
        int lc=1;
        int c=0;
        for(int i=0;i<n;i++){
            ll val = lcm(lc, a[i]);
            lc = lcm(lc, a[i]);
            cout << "LCM: "<< val<< " " << mp[val] << endl;
            // lc = lcm(lc, a[i]);
         
        }
        cout<<c<<endl;
    }
    return 0;
}