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
    int a[n];
    ll sum=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a, a + n);
    if(sum%2==0){
        cout<<sum<<'\n';
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                sum-=a[i];
                break;
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}