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
        int a,b,c;cin>>a>>b>>c;
        int max= std::max(a,std::max(b,c));
        int min= std::min(a,std::min(b,c));
        int mid = a+b+c - max - min;
        // cout<<max<<" "<<mid<<" "<<min<<endl;
        int res = abs(max-mid) + abs(mid-min) ;
        cout<<res<<endl;
    }
    return 0;
}