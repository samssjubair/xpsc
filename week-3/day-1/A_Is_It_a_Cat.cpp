#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#include <map>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 'a')
            {
                s[i] += 32;
            }
        }
        // cout << s << endl;
        string ref="meow";
        bool flag=true;
        int l=0,r=0;
        // if (s[r] != ref[l])
        // {
        //     flag = false;
        //     cout << (flag ? "YES" : "NO") << endl;
        //     break;
        // }
        while(r<n){
            if (s[r] != ref[l])
            {
                flag = false;
                break;
            }
            while(s[r]==ref[l]){
                r++;
            }
            l++;
            if(s[r]!=ref[l]){
                flag=false;
                break;
            }
        }
        cout<< (flag ? "YES": "NO")<<endl;
    }
    return 0;
}