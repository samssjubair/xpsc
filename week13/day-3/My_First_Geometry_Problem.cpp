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
        string s;cin>>s;
        int n=0;
        for(int i=0;i<4;i++){
            if(s[i]=='1') n++;
        }
        // cout<<n<<endl;

        if(n==0) cout<<0<<endl;
        else if(n==1) cout<<11<<endl;
        // else if(n==2) cout<<2<<endl;
        else if(n==3) cout<<231<<endl;
        else if(n==4) cout<<441<<endl;
        else {
            if(s[0]=='1' && s[1]=='1') cout<<21<<endl;
            else if(s[2]=='1' && s[3]=='1') cout<<21<<endl;
            else cout<<121<<endl;
            
            
        }
    }
    return 0;
}