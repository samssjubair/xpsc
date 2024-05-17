#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int a[205][205];

int solve(int si, int sj, int n, int m)
{
    int ans = 0;
    // cout<< si<<sj<<endl;
    int i,j;
    i=si; j=sj;
    while(i>-1 && j>-1){
        ans+=a[i][j];
        i--;
        j--;
        // cout<< a[i][j]<<endl;
    }
    i = si;
    j = sj;
    while (i > -1 && j < m)
    {
        ans += a[i][j];
        i--;
        j++;
    }
    i = si;
    j = sj;
    while (i<n && j> - 1)
    {
        ans += a[i][j];
        i++;
        j--;
    }
    i = si;
    j = sj;
    while (i<n && j< m)
    {
        ans += a[i][j];
        i++;
        j++;
    }
    ans-=(3*a[si][sj]);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n>>m;
        // int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cin >> a[i][j];
                ans = max(ans, solve(i, j, n, m));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}