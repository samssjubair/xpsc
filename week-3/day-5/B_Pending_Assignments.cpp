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
        int x,y,z;
        cin>>x>>y>>z;
        if(x*y<=z*24*60){
            cout<<"YES"<<endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}