#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
         map<int,int> mp;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            a[i]=tmp;
            mp[tmp]++;
        }
        int c=0;
        int ind=0;
        for(int i=0;i<n;i++){
            if(mp[a[i]]>1){
                mp[a[i]]--;
                c++;
                ind=i+1;
                // cout<<a[i]<<" ";
                continue;
            }

        }
        cout<<ind<<endl;
        // if(ind!=0){
        //     cout<<ind+1<<endl;
        // }else{
        //     cout << 0 << endl;
        // }
    }
    return 0;
}