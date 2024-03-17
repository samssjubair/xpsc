    #include <iostream>
    #include <string>
    #include <cstring>
    #include <algorithm>
    #include <cmath>
    #include <climits>
    #include <vector>
    #include <map>
    #include <iomanip>

    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            int N = 3;
            string a[N][n];
            map<string, int> mp;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    string val;
                    cin >> val;
                    a[i][j] = val;
                    mp[val]++;
                }
            }
            int ans[N];
            memset(ans, 0, sizeof(ans));

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    // cout << mp[a[i][j]] << " ";
                    int score;
                    if (mp[a[i][j]] == 2)
                    {
                        score = 1;
                    }
                    else if (mp[a[i][j]] == 3)
                    {
                        score = 0;
                    }
                    else
                    {
                        score = 3;
                    }
                    ans[i] += score;
                }
            }
            for (int i = 0; i < N; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return 0;
    }