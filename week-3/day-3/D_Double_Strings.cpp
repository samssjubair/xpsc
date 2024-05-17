#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;
vector<string> v;
map<string,int> mp;
bool isMatch(string str){
    for(int i=0;i<str.size();i++){
        // string l= str.substr(0,i);
        // string r= str.substr(i+1, str.size());
        string l= str.substr(0,i);
        string r= str.substr(i, str.size());
        // cout << l << " " << r << endl;
        if(mp[l] && mp[r]){
            return true;
        }
    }
    return false;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        mp.clear();
        v.clear();
        for(int i=0;i<n;i++){
            string temp;
            cin>>temp;
            v.push_back(temp);
            mp[temp]++;
        }
        for(int i=0;i<n;i++){
            cout<<isMatch(v[i]);
        }
        cout<<endl;
    }
    return 0;
}