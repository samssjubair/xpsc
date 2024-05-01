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
        int n,k;
        cin>>n>>k;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(v[i][j]=='1'){
                    ans[i]=1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            // cout<<ans[i]<<" ";
            if(ans[i]==0){
                cout<<"NO"<<endl;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}