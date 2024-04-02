#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;
        cin>>s;
        ll sum=0;
        // for(ll i=0)
        vector<ll> v;
        ll c=0;
        for(ll i=0;i<n;i++){
            ll l=i;
            ll r=n-i-1;
            if(s[i]=='L'){
                if(l<r){
                    sum+=r;
                    v.push_back(r-l);
                    c++;
                }else{
                    sum+=l;
                }
            }else{
                if (l > r)
                {
                    sum += l;
                    v.push_back(l-r);
                    c++;
                }
                else
                {
                    sum += r;
                }
            }
            
        }
        
        ll ans[n+1];
        // cout << sum << endl;
        for(ll i=c;i<=n;i++){
            // cout<<v[i]<<" ";
            ans[i]=sum;
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (ll i = c-1; i >=1; i--)
        {
            sum-=v.back();
            v.pop_back();
            ans[i]=sum;

        }
        for (ll i = 1; i <= n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}