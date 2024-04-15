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
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            ans|=tmp;
        }
        cout<<ans<<endl;

    }
    return 0;
}