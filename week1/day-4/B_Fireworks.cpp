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
        ll a,b,m;
        cin>>a>>b>>m;
        ll ans;
        ans=(m/a + m/b)+2;
        cout<<ans<<endl;
    }
    return 0;
}