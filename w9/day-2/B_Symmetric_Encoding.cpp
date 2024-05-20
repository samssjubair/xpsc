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
        int n;
        string S;
        set<char> st;
        cin >> n >> S;
        for (int i = 0; i < n; i++)
        {
            st.insert(S[i]);
        }

        string newString;
        for (auto it = st.begin(); it != st.end(); ++it)
        {
            // cout << ' ' << *it;
            newString+=*it;
        }

        map<char,char> mp;
        int m = newString.size();
        for (int i = 0; i <m ; i++)
        {
            // mp.first=newString[i];
            // mp.second=newString[m-i-1];
            mp[newString[i]]=newString[m-i-1];
        }
        string res="";
        for(int i=0;i<n;i++){
            res+= mp[S[i]];
        }
        cout<<res<<endl;
    }
    return 0;
}