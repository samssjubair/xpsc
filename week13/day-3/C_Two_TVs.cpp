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

    int n;
    cin >> n;
    map<ll, ll> d;
    for(int i=1;i<=n;i++)
    {
        ll l,r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }

    ll sum=0;
    bool flag = false;

    for(auto [idx, val] : d)
    {
        sum += val;
        if(sum > 2)
        {
            flag = true;
            break;
        }
    }

    cout<<(flag ? "NO" : "YES")<<endl;

    return 0;
}