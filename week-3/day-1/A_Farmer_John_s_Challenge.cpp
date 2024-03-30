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
        ll n,k;cin>>n>>k;
        int a[n];
        if(n==k){
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
        }
        else if((n+k)%2==0){
            for(int i=0;i<n;i++){
                // a[i]=i+1;
                cout<<i+1<<" ";
            }
        }
        else
        {
            cout << -1;
        }
        cout<<endl;

    }
    return 0;
}