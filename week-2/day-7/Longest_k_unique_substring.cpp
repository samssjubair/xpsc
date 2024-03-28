#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    int k;

    string s;
    cin >> s;
    cin >> k;
    map<char, int> mp;

    ll l = 0, r = 0, mx = INT_MIN;
    while (r < s.size())
    {
        mp[s[r]]++;
        while (mp.size() > k)
        {
            mp[s[l]]--;
            // cout<<mp[s[l]]<<" ";
            if(mp[s[l]]==0){
                mp.erase(s[l]);
            }
            // cout<<mp[s[l]];
            l++;
        }
        if (k == mp.size())
        {
            mx = max(mx, r - l + 1);
            // cout << "a" << endl;
        }
        r++;
    }
    

    cout << mx << endl;
    return 0;
}