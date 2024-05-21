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
    int n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for (int i = 1; i < n; i++)
    {
        if(a[i-1]>a[i]){
            sum+=(a[i-1]-a[i]);
            a[i] += (a[i - 1] - a[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}