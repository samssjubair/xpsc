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

// int rec(ll a,ll b,ll k){
//     if(a==b){
//         return 1;
//     }
//     rec(a)

// }

int res(ll A, ll B, ll K)
{
    int c = 0;
    while (B > A)
    {
        if (B % K == 0 && B / K >= A)
        {
            B /= K;
            c++;
        }
        else
        {
            if (B / K < A)
            {
                c += (B - A);
                break;
            }
            else
            {
                c += (B % K);
                B -= (B % K);
                if (B < A)
                {
                    c += (A - B);
                    break;
                }
            }
        }
    }
    return c;
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
        ll a, b, k;
        cin >> a >> b >> k;
        // ll b = d;
        // // cout<<rec(a,b,k)<<endl;
        // // cout<<(b-a)/k<<endl;
        // int c = 0;
        // int rem;
        // while (b != a)
        // {
        //     if (b / k > a && b % k == 0)
        //     {
        //         rem = b % k;
        //         b /= k;
        //     }
        //     else
        //     {
        //         b--;
        //     }
        //     // if (b > k)
        //     // {
        //     //     c += (b - k);
        //     // }
        //     c++;
        // }
        cout << res(a, b, k) << endl;

        // cout<<c<<endl;
    }
    return 0;
}
