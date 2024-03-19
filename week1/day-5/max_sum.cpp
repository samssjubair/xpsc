#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0;
    int ans = 0;
    int res = 0;
    while (j < n)
    {
        // while(j<k && j<n){
        //     ans+=a[j];
        //     res=max(res,ans);
        //     j++;
        // }
        // ans+=a[j];
        // ans-=a[i];
        // res = max(res, ans);
        // cout<<res<<endl;
        // i++;
        ans += a[j];
        if (j - i + 1 == k)
        {
            res = max(res, ans);
            ans -= a[i];
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << res << endl;
    return 0;
}