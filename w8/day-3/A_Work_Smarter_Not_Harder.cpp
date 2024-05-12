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
        int l,v1,v2;
        cin>>l>>v1>>v2;
        int x1= ceil(l/(v1*1.0));
        int x2= ceil(l/(v2*1.0));
        if(x1<=x2){
            cout<<-1<<endl;
        }
        else{
            cout << x1-(x2+1) << endl;
        }
    }
    return 0;
}