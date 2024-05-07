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
        int rem;
        int ans=0;
        while(n){
            // rem=n%2;
            if(n%2){
                ans++;
            }
            // n/=2;
            n=n/2;
            
        }
        cout<<(ans%2 ? "ODD": "EVEN")<<endl;
    }
    return 0;
}