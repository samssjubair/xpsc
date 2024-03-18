#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long

using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    ll a[n1],b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    int i=0,j=0,ans=0;
    while(j<n2){
        while(a[i]<b[j] && i<n1){
            ans++;
            i++;
        }
        j++;
        cout<<ans<<" ";
    }
    cout<<'\n';
    return 0;
}