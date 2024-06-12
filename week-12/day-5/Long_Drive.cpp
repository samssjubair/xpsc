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
        int x,y;
        cin>>x>>y;
        int i;
        for( i=0;i<=50000;i++){
            int z = (x * 10 + i * 100) / (10 + i);
            if (z>=y){
                
                break;
            }
        }
        cout<<i<<endl;
        
    }
    return 0;
}