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
    int n1,n2;
    cin>>n1>>n2;
    ll a[n1],b[n2];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    ll ans=0;
    while(i<n1 && j<n2){
        int cnt1=0,cnt2=0, curr=a[i];
        while(a[i]==curr && i<n1){
            cnt1++;
            i++;
        }
        while(curr>b[j]&& j<n2){
            j++;
        }
        while (b[j] == curr && j < n2)
        {
            cnt2++;
            j++;
        }
        ans+= (1LL * cnt1*cnt2);
        // cout<<ans<<endl;
    }
    cout<<ans<<'\n';
    return 0;
}