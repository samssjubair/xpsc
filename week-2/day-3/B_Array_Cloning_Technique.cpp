#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <map>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int> mp;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++;
            mx=max(mx,mp[x]);
        }
        int ans=0;
        if(mx==n){
            cout<<ans<<endl;
            continue;
        }
        
        ans=1;
        while(mx<=n){
            if(mx*2>=n){
                ans+=n-mx;
                break;
            }
            ans+=mx;
            mx*=2;
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}