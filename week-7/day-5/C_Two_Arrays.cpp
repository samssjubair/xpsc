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
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            b[i]=temp;
        }
        sort(a,a+n);
        sort(b,b+n);
        int c=0;
        for(int i=0;i<n;i++){
            if((a[i]==b[i]) || (a[i]+1==b[i]) ){
                c++;
            }
        }   
        cout<< (c==n ? "YES": "NO")<<endl;
         
    }
    return 0;
}