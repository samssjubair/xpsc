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
        int n;
        cin>>n;
        vector<int> a(n - 1);
        // vector<ll> res(n+1);
        vector<ll> res(n);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        res[0]=501;
        

        for(int i=1;i<n;i++){
            res[i]=a[i-1]+res[i-1];
        }
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}