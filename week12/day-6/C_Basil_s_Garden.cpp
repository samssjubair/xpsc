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
        ll n;
        cin >> n;
        vector<int> height(n);
        ll time = 0;
        bool flag = true;
        for (int i = 0; i < n; ++i)
        {
            cin >> height[i];
        }
       
        for(int i=0;i<n;i++){
            time= max(time, (ll)height[i]+i);
        }
        cout << time << endl;
    }
    return 0;
}