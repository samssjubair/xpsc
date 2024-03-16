#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int j=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                c[j]=a[i];
                j++;
            }
        }
        int ans=0;
        int i;
        for( i=0;i<n/2;i++){
            if(c[i]!=ans){
                cout<<ans<<" ";
                break;
            }else{
                ans++;
            }
        }
        if(i==n/2){
            cout<<ans<<" ";
        }
        cout<<'\n';

    }
    return 0;
}