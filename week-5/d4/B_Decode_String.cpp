#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string res="";
        for(int i=0;i<s.size();i++){
            // cout<<char(97+s[i]-'0'-1);
            if(i+2<n && s[i+2]=='0' && (i+3>=n || s[i+3]!='0')){
                int n = ((s[i] - '0') * 10) + ((s[i+1] - '0'));
                res.push_back(char(96+n));
                i+=2;
            }else{
                res.push_back(char(96+s[i]-'0'));
            }
        }
        cout<<res<<endl;
    }

    return 0;
}