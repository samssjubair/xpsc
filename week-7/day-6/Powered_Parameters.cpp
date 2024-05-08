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

bool isPowerOf(ll x, ll y)
{
    float res1 = log(y) / log(x);
    return res1 == floor(res1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 1];
        for (int i = 1; i < n + 1; i++)
            cin >> a[i];

        // ll cnt=0;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++){
        //         // cnt++;
        //         if(pow(a[j],i)<=a[i]){
        //             cnt++;
        //         }
        //     }
        // }
        // cout<<cnt<<endl;
        ll res = 0;
        for (int i = 1; i <= n; i++)
        {

            ll first = a[i];
            if (first == 1)
            {
                res+=n;
            }
            else
            {
                ll pw = 1;
                for (int j = 1; j <= n; j++)
                {

                    pw = first * pw;
                    if (pw > 1e9)
                    {
                        break;
                    }
                    else
                    {
                        ll second = a[j];
                        if (pw <= second)
                        {
                            res++;
                        }
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}