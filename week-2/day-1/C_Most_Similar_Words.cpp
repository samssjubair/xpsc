#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

int dis(string s1, string s2){
    int res=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]>=s2[i]){
            res+= s1[i]-s2[i];
        }else{
            res+= s2[i]-s1[i];
        }
    }
    return res;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> v;
        for(int i=0;i<n;i++){
            string s;cin>>s;
            v.push_back(s);
        }
        int minRes=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                minRes = min(minRes, dis(v[i] ,v[j]));
            }
        }
        cout<<minRes<<endl;
    }
    return 0;
}