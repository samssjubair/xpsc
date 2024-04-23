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
        ll a[n];
        ll mx=LLONG_MIN;
        ll c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=0){
                c++;
                mx=max(mx,c);
            }
            else
            {
                c = 0;
            }
        }
        ll b[n];
        ll mx2 = LLONG_MIN;
        ll cn = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != 0)
            {
                cn++;
                mx2 = max(mx2, cn);
            }else{
                cn=0;
            }
        }
        // cout << mx << " " << mx2 << endl;
        if(mx>mx2){
            cout<<"Om"<<endl;
        }
        else if (mx < mx2){
            cout << "Addy" << endl;
        }else{
            cout << "Draw" << endl;
        }
    }
    return 0;
}