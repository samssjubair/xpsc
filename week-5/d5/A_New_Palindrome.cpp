#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.size()/2;i++){
            mp[s[i]]++;
        }
        cout<<(mp.size()>1 ? "YES": "NO")<<endl;
    }
    return 0;
}