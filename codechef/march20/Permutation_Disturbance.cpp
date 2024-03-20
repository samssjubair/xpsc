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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        for (int i = 0; i < n; i++)
        {
            if(i+1==a[i]){
                swap(a[i],a[i+1]);
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}