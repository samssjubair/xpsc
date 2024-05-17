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

    vector<vector<int> > grid;

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        vector<int> row;
        for(int j=0; j<m; j++)
        {
            int x;
            cin >> x;
            row.push_back(x);
        }
        grid.push_back(row);
    }

    // vector<vector<int> > dp(n, vector<int>(m, 0));

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> cntRow;
    for (int i = 0; i < grid.size(); i++)
    {
        int c = 0;
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                c++;
            }
        }
        cntRow.push_back(c);
    }

    vector<int> cntCol;
    for (int i = 0; i < grid[0].size(); i++)
    {
        int c = 0;
        for (int j = 0; j < grid.size(); j++)
        {
            if (grid[j][i] == 1)
            {
                c++;
            }
        }
        cntCol.push_back(c);
    }
    
    int ans=0;
    for(int i=0;i< grid.size(); i++)
    {
        for(int j=0; j<grid[0].size(); j++)
        {
            if(grid[i][j] && cntRow[i]>=1 && cntCol[j]>=1)
            {
                ans+= ((cntRow[i]-1) * (cntCol[j] - 1));
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}