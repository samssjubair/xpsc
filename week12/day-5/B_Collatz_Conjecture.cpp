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

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll result = x;

        ll remainder = y - x % y;

        if (k <= remainder)
        {

            if(k==remainder)
            {
                x += k;
                while (x % y == 0)
                {
                    x /= y;
                }
                result = x;
                cout << result << endl;
                continue;
            }
            else
            {
                result = x + k;
                cout << result << endl;
                continue;
            }
        }

        while (true)
        {
            ll tempRem = remainder;
            if (x == 1)
            {
                break;
            }
            if (k >= tempRem)
            {
                k -= tempRem;
                x += tempRem;
                while (x % y == 0)
                {
                    x /= y;
                }
                remainder = y - x % y;
            }
            else
            {
                x += k;
                k = 0;
                result = x;
                break;
            }
        }

        if (k != 0)
        {
            result = k % (y - 1) + 1;
        }

        cout << result << endl;
    }
    return 0;
}