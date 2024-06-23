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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int ind[m];
        for(int i=0;i<m;i++){
            cin>>ind[i];
        }
        string c;
        cin>>c;

        sort(c.begin(),c.end());
        set<int> uniqueC(ind,ind+m);
        vector<int> newC(uniqueC.begin(), uniqueC.end());
        sort(newC.begin(), newC.end());

        
        for (int i = 0; i < newC.size(); i++)
        {
            s[newC[i] - 1] = c[i];
        }



        cout<<s<<endl;
    }
    return 0;
}