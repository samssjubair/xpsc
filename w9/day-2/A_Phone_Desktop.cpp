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
        int x,y;
        cin>>x>>y;
        int sc=ceil(y/2.0);
        int rem= sc*15- (y*4);

        if(rem<x){
            sc+= ceil((x-rem)/15.0);
        }

        cout<<sc<<endl;
    }
    return 0;
}