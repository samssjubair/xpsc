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
    ll x,y;
    cin>>x>>y;
    int ans=0;
    while(x<=y){
        ans++;
        x+=x;
    }
    cout<<ans<<endl;
    return 0;
}