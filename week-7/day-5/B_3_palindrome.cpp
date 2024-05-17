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
    string ans="";
    for(int i=0;i<n/2.0;i++){
        if(i%2==0){
            ans+="aa";
        }else{
            ans+="bb";
        }
    }
    if(n%2){
        ans.pop_back();
    }
    cout<<ans<<endl;
    return 0;
}