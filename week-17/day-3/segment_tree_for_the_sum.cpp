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


const int maxN = 1e5+5;
ll a[maxN], t[4*maxN];

void build(int n, int b, int e)
{
    if(b==e)
    {
        t[n]=a[b];
        return;
    }
    int mid=(b+e)/2;
    int l=2*n;
    int r=2*n+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n]=t[l]+t[r];
}

void update(int n, int b, int e, int i, int v){
    if(i<b || i>e) return;  
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j){
    if(j<b || i>e) return 0;
    if(b>=i && e<=j) return t[n];
    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];

    build(1,1,n);
    while(m--){
        int t;
        cin>>t;
        if(t==1){
            int i,v;
            cin>>i>>v;
            i++;
            update(1,1,n,i,v);
        }
        else{
            int i,j;
            cin>>i>>j;
            i++;
            cout<<query(1,1,n,i,j)<<endl;
        }
    }





    return 0;
}