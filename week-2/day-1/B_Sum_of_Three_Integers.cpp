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
    int k,s;
    cin>>k>>s;
    int res=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int rem=s-i-j;
            if(rem>=0 && rem<=k){
                res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}