#include <iostream>
#include <string>
#include <cstring>
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
        int n;cin>>n;
        ll a[n];
        int freq[n+2];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            ll val;cin>>val;
            a[i]=val;
            freq[val]++;
        }

        // cout<<freq[2]<<'\n';
        bool flag=false;
        for(int i=n-1;i>=0;i--){
            if(freq[a[i]]>=3){
                flag=true;
                cout<<a[i]<<'\n';
                break;
            }
        }
        if(!flag){
            cout<<-1<<'\n';
        }


    }
    return 0;
}