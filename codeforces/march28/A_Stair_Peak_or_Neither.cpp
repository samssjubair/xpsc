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
        int a,b,c;cin>>a>>b>>c;
        if(a<b && b<c){
            cout<<"STAIR";
        }
        else if (a < b && b > c)
        {
            cout << "PEAK";
        }else{
            cout << "NONE";
        }
        cout<<endl;
    }
    return 0;
}