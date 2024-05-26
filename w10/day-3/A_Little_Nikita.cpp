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
        int n,m;cin>>n>>m;
        // cout<<(n>=m?"Yes":"No")<<endl;
        if(n==m){
            cout<<"Yes"<<endl;
            continue;
        }

        if(n<m){
            cout<<"No"<<endl;
            continue;
        }

        cout<<((n-m)%2==0?"Yes":"No")<<endl;
    }
    return 0;
}