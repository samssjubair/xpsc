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
        // int aliceInd=0;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(i==0){
                mn=min(mn, abs(a[i]-a[i+1]));
            }else if(i==(n-1)){
                mn=min(mn, abs(a[i]-a[i-1]));
            }else{
                mn=min(mn,max(abs(a[i]-a[i-1]), abs(a[i]-a[i+1])));
            }
                
        }
        cout<<mn<<endl;
        
    }
    return 0;
}