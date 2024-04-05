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
        int minXor=a[0];
        for (int i = 1; i < n; i++)
        {
            minXor=minXor ^ a[i];
        }
        int minRes=minXor;
        for (int i = 0; i < n; i++)
        {
            minRes = min(minRes, minXor ^ a[i]);
        }
        cout << minRes << endl;
    }
    return 0;
}