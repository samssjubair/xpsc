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
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=-1;
        for(int i=0;i<n;i++){
            if((a[i]&k)==k){
                res &=a[i];
            }
        }
        cout<<(res==k ? "YES" : "NO")<<'\n';
        // if(res==k)

    }
    return 0;
}