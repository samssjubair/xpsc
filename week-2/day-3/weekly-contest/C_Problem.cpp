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
        int a, b;cin>>a>>b;
        bool flag=false;
        while(a*b>0){
            if (a == b)
            {
                flag = true;
                break;
            }
            else if (a > b)
            {
                a--;
                b++;
            }
            else
            {
                a += 3;
                b--;
            }
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}