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
        int n;string s;
        cin>>n>>s;
        int c=n;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                c--;
            }
        }
        cout<<c<<endl;
        // cout<<c<<endl;
    }
    return 0;
}