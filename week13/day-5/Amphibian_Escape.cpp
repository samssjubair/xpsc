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
        
        ll p = 0;
        ll q = 0;
        ll ans = 0;
        ll n, k, h;
        cin >> n >> k >> h;
        p++; q++;
    
        for(; p <= n;){
            if (p >= h)
            {
                    ans = ans + n;p = p + 1;
                    }else{
                        int tt = p * k - q * (k - 1);
                         if (tt>= h)
                        {
                            int ttt = p * k - q * (k - 1);
                            while (ttt>= h)
                            {
                                q++;
                                ttt = p * k - q * (k - 1);
                            }
                            ans = ans + q - 1;
                        }
                        else
                        {
                            p++;
                        }
                    }
            }

        cout << ans << endl;
    }
    return 0;
}