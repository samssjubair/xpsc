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

    int n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        auto itl= lower_bound(a.begin(),a.end(), l); 
        auto itr= upper_bound(a.begin(),a.end(), r); 
        cout<<itr-itl<<" ";
    }
    cout<< '\n';

    return 0;
}