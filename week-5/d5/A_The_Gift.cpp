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
    int x,n,m;
    cin>>x>>n>>m;
    if(x+m>=n){
        cout<<"YES"<<endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}