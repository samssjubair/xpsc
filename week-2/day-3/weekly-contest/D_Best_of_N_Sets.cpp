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
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mx=max(a,b);
        cout<<2*mx-1<<endl;
    }
    return 0;
}