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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f=true;
        for(int i=1;i<n-1;i++){
            if (a[i - 1] < a[i] && a[i] > a[i+1]){
                cout<<"YES"<<endl;
                cout << i  << " " << i+1  << " " << i + 2 << " " << endl;
                f=false;
                break;
            }
        }
        if(f){
            cout << "NO" << endl;
        }
    }
    return 0;
}