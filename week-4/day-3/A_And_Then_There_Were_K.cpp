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
        ll n;
        cin>>n;
        ll ans=0;
        while(n>0){
            
            n/=2;
            ans++;
        }
        cout<<(pow(2,ans-1))-1<<endl;
    }
    return 0;
}