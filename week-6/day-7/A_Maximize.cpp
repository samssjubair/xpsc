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

int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int mx=INT_MIN;
        int y=1;
        for(int i=1;i<n;i++){
            // cout<<n-i<<" ";
            // mx=max(mx,gcd(n,i)+i);
            if(mx<gcd(n,i)+i){
                mx=gcd(n,i)+i;
                y=i;
            }
        }
        cout<<y<<endl;

    }
    return 0;
}