#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int n;cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int res=max(x%3,y%3);
        cout<<res<<endl;
    }
    return 0;
}