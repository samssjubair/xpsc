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
        int n,k,l;
        cin>>n>>k>>l;
        int sum=0;
        multiset<int> s;
        for(int i=0;i<n;i++){
            int m,ln;
            cin>>m>>ln;
            if(l==ln){
                s.insert(m);
            }
        }
        auto it = s.rbegin(); 
        for (int i = 0; i < k && it != s.rend(); i++, it++)
        {
            sum += *it; 
        }
        cout<<(s.size()<k ? -1 : sum)<<endl;
    }
    return 0;
}