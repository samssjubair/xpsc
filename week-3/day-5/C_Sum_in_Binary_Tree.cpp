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
        ll n;cin>>n;
        ll ans=n;
        while(n>0){
            ans+=n/2;
            n/=2;

        }
        cout<<ans<<endl;
    }
    return 0;
}