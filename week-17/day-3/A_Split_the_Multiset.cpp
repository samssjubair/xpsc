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
        int n, k;
        cin >> n >> k;
        vector<int> a;
        a.push_back(n);

        int cnt = 0;
        int sz=1;
        for (int i=0; sz < n;i++)
        {
            int el = a.back();
            a.erase(a.begin() + a.size() - 1);
            for (int i = 0; i < min(k - 1, el - 1); i++)
            {
                a.push_back(1);
            }
            a.push_back(el - k + 1);
            cnt=i;
            sz=a.size();
            
        }

        cout << ( cnt ? ++cnt : 0) << endl;
    }
    return 0;
}

// 5 4
// -> 1 1 1 2