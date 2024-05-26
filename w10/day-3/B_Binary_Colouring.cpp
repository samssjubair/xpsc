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
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> res;

        while (n > 0)
        {
            if (n % 2 == 0)
            {
                res.push_back(0);
                n /= 2;
            }
            else
            {
                if (n % 4 == 1)
                {
                    res.push_back(1);
                    n = (n - 1) / 2;
                }
                else
                {
                    res.push_back(-1);
                    n = (n + 1) / 2;
                }
            }
        }

        cout << res.size() << endl;
        for (size_t i = 0; i < res.size(); ++i)
        {
            if (i > 0)
                cout << " ";
            cout << res[i];
        }
        cout << endl;
    }

    return 0;
}
