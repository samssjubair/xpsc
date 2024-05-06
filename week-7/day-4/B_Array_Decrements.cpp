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

        ll rem=a[0]-b[0];
        for (int i = 0; i < n; i++)
        {
            if(b[i]!=0){
               rem = a[0] - b[0];
               break;
            }
        }
        // cout<<rem<<endl;
        for(int i=0;i<n;i++){

            if(a[i]<b[i]){
                flag=false;
                break;
            }

            if(a[i]-b[i]<rem){
                continue;
            }

            if(a[i]-b[i]!=rem){
                flag=false;
                break;
            }
            
        }
        cout<<(flag?"YES":"NO")<<endl;

    }
    return 0;
}