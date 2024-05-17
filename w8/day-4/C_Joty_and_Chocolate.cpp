#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;

ll lcm(ll a,ll b){
    return ((a / __gcd(a, b))*b);
}

int main()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll ans=0,overlap;
    ans+=(n/a)*p;
    ans+=(n/b)*q;
    overlap=(n/lcm(a,b));
    ans-=(overlap* (p+q));
    ans+=(overlap* max(p,q));
    cout<<ans<<endl;
    return 0;
}