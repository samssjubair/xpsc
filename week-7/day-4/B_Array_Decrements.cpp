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

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll a[n], b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        bool flag=true;

        ll rem=-1;
        ll zeroRem=-1;
        
        // cout<<rem<<endl;
        for(int i=0;i<n;i++){

            if(a[i]<b[i]){
                flag=false;
                break;
            }

            if(b[i]!=0){
                if(rem==-1){
                    rem=a[i]-b[i];
                }else{
                    if(a[i]-b[i]!=rem){
                        flag=false;
                        break;
                    }
                }
            }else{
                zeroRem = max(zeroRem, a[i] - b[i]);
                // if(rem<a[i]-b[i]){
                //     flag=false;
                //     break;
                // }
            }  
        }
        // if(rem==-1){
        //     cout<<"YES"<<endl;
        //     continue;
        // }

        if(!flag){
            cout<<"NO"<<endl;
            continue;
        }

        cout << ((rem == -1|| zeroRem <= rem) ? "YES" : "NO") << endl;
        // else{
        //     cout<<"YES"<<endl;
        // }

    }
    return 0;
}