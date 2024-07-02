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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int sum=0;
        int ans=n;

        for(int i=0;i<n;i++){
            sum+=a[i];
        }

        if(sum%2==0){
            cout<<ans<<endl;
            continue;
        }
        int i=0,j=n-1;
        int close=0;
        while(i<=j){
            if((a[i]%2!=0) || (a[j]%2!=0)){
                close= min(i+1,n-j);
                break;
            }
            i++;
            j--;
            
        }
        ans-=close;
        cout<<ans<<endl;

    }
    return 0;
}