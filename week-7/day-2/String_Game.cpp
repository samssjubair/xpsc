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
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n-1;i+=2){
            if(s[i]!=s[i+1]){
                c++;
            }
        }
        cout<<(c%2==0 ? "Ramos": "Zlatan")<<endl;
    }
    return 0;
}