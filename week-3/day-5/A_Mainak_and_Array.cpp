#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        // int mn=INT_MAX;
        // int mx=INT_MIN;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            a[i]=tmp;
        }
        // cout<<mx-mn<<endl;
        int ans=a[n-1]-a[0];
        for (int i = 1; i < n; i++)
        {
            ans=max(ans, a[i]-a[0]);
        }
        for (int i = 0; i < n-1; i++)
        {
            ans = max(ans, a[n-1] - a[i]);
        }
        for (int i = 1; i < n ; i++)
        {
            ans = max(ans, a[i-1] - a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}