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

    int t;cin>>t;
    while(t--){
        int m,n;cin>>m>>n;
        ll a[m][n];
        ll b[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll bam = (i < m - 1) ? a[i + 1][j] : LLONG_MIN;
                ll dan = (j < n - 1) ? a[i][j + 1] : LLONG_MIN;
                ll upor = (i > 0) ? a[i - 1][j] : LLONG_MIN;
                ll nich = (j > 0) ? a[i][j - 1] : LLONG_MIN;
                

                ll newVal = std::max(upor, std::max(nich, std::max(bam, dan)));
                if (a[i][j] > newVal)
                {
                    b[i][j] = newVal;
                }
                else{
                    b[i][j] = a[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}