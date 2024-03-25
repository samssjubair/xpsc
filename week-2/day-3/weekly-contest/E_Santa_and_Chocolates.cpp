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
        int n,k; cin>>n>>k;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        // bool flag=true;

        if(sum<n){
            cout<<"NO"<<endl;

        }else{
            if(sum%2==0){
                cout<<"YES"<<endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}