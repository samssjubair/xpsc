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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // int c=0;
        // int l = 0;
        // map<int, int> mp;
        // for(int r=0;r<n;r++){
        //     mp[a[r]]++;
        //     if(r-l==2){
        //         if (mp.size() == 2)
        //         {
        //             c++;
        //         }
        //         mp[a[l]]--;
        //         l++;
                
                
        //     }
            

        // }

        // cout<<mp.size() <<endl;
        int bp=0;
        for(int i=0;i<n-3;i++){
            int c=0;
            if(a[i]!=a[i+1]){
                c++;
            }
            if(a[i+1]!=a[i+2]){
                c++;
            }
            if(a[i+2]!=a[i+3]){
                c++;
            }

            if(c==1){
                bp++;
            }
        }
        cout<<bp<<endl;
    }
    return 0;
}