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
        int n,k;
        cin>>n>>k;
        // int j=2;
        // int cnt=0;
        // for(int i=j;i<=n;i+=j){

        //     j++;
        //     cnt++;
        // }
        int cnt = k * (k + 1) / 2 + (k - 1);
        if(n==1 && k==1){
            cout<<"YES"<<endl;
        }else{
            cout << (n>=cnt? "YES": "NO") << endl;
        }
    }
    return 0;
}