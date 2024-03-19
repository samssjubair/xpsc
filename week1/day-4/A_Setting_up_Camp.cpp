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
    int t;cin>>t;
    while(t--){
        ll a,b,c;
        ll ans=0;
        bool ifPossible=true;
        cin>>a>>b>>c;
        ans+=a;
        if(b%3+c>=3 || b%3==0){
            ll tmp=b+c;
            ll rem=ceil(tmp/3.0);
            ans+=rem;
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    cout<<endl;

    return 0;
}