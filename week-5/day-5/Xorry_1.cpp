#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        // int l=0;
        // int r=n;
        // // int ans=INT_MAX;
        // int ansX,ansY;
        // while(l<r){
        //     if((l^r)==n){
        //         // cout<<"t"<<l<<" "<<r<<endl;
        //         // ans=min(ans, r-l );
        //         ansX=l;
        //         ansY=r;
        //     }
        //     l++;
        //     r--;
        // }
        // cout<<ansX<<" "<<ansY<<'\n';
        int l=0,r=0;
        for(int i=31;i>=0;i--){
            if(n& (1<<i)){
                l |= (1 << i);
                break;
            }
        }
        r=n^l;
        cout<<min(l,r)<<" "<<max(l,r)<<'\n';
    }
    return 0;
}