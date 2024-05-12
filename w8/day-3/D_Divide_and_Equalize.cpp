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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<int,int> cnt;
        for (int i = 0; i < n; i++)
        {
            for(int j=2;j*j<=a[i];j++){
                while(a[i]%j==0){
                    cnt[j]++;
                    a[i]/=j;
                }
            }
            if(a[i]>1){
                cnt[a[i]]++;
            }
        }
        bool f=true;
        for(auto [x,y]:cnt){
            if(y%n!=0){
                f=false;
                break;
            }
        }
        cout<<(f? "YES":"NO")<<endl;
    }
    return 0;
}