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

    string t,p;cin>>t>>p;
    int n=t.size(),m=p.size();
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    auto ok= [&](int mid){
        vector<bool> to_erase(n+1);
        for(int i=0;i<mid;i++){
            to_erase[a[i]]=true;
        }
        int j=0;
        bool flag= false;
        for(int i=0;i<n;i++){
            if(t[i]==p[j]&& !to_erase[i+1]){
                j++;
            }
            if(j==m){
                flag=true;
                break;
            }
        }
        return flag;
    };

    int l=0,r=n, mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    cout<<ans<<endl;

    
    return 0;
}