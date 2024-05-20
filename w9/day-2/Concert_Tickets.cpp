#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    // ll a[n];
    multiset<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin>>t;
        auto it=a.upper_bound(t);
        if(it==a.begin()){
            cout<<"-1"<<endl;
        }else{
            --it;
            cout<<*it<<endl;
            a.erase(it);
        }
    }
    return 0;
}