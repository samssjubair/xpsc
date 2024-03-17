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
    int a,b,c; cin>>a>>b>>c;
    for(int i=0;i<10000;i++){
        // way 1
        // for(int j=0;j<10000;j++){
        //     if(a*i+b*j==c){
        //         cout<<"Yes";
        //         return 0;
        //     }
        // }

        // way 2
        int d= c-a*i;
        if(d%b==0 && d>=0){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}