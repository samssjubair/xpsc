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
    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char tmp= a[0];
        a[0]=b[0];
        b[0]=tmp;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}