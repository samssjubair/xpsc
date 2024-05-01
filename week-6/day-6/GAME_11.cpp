#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <climits>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <utility>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<ll> bm(n),bw(m);
        for(int i=0;i<n;i++){
            cin>>bm[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> bw[i];
        }
        

        if(n<4 || m<4 || (n+m)<11){
            cout<<"-1"<<endl;
            continue;
        }

        // vector<ll> rest(n + m - 8);

        sort(bm.begin(), bm.end());
        sort(bw.begin(),bw.end());

        ll sum=0;
        // for (ll i = 0; i < n; i++)
        // {
        //     if(n-i<=4){
        //         sum+=bm[i];
        //     }else{
        //         rest.push_back(bm[i]);
        //     } 
        // }
        // for (ll i = 0; i < m; i++)
        // {
        //     if (n - i <= 4)
        //     {
        //         sum += bw[i];
        //     }
        //     else
        //     {
        //         rest.push_back(bw[i]);
        //     }
        // }
        // // cout<<sum<<endl;
        // sort(rest.begin(), rest.end(), greater<ll>());
        // // ll ln = rest.size() - (n + m - 11);
        //  for (ll i = 0; i <3 ; i++)
        // {
        //     sum+=rest[i];
        //     // cout<<i<<rest[i]<<endl;
        // }
        // cout<<sum<<endl;


        int l= n-1;
        int r= m-1;
        
        for(int i=0;i<4;i++){
            sum+=bm[l--];
        }
        for(int i=0;i<4;i++){
            sum+=bw[r--];
        }

        for(int i=0;i<3;i++){
            if(l>=0 && r>=0){
                if(bm[l]>=bw[r]){
                    sum+=bm[l--];
                }else{
                    sum+=bw[r--];
                }
            }else if( l >=0){
                sum+=bm[l--];
               
            }else{
                sum+=bw[r--];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}