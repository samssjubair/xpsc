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
        ll n,k;cin>>n>>k;
        for(int i=1;;i*=2){
            ll y= ((n/i)+1)/2;
            if(k<=y){
                ll k_odd= 2*k-1;
                cout<<k_odd* i<<endl;
                break;
            }else k-=y;
        }
        
    }
    return 0;
}