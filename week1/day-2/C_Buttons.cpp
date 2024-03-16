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
    int a,b, ans=0;
    cin>>a>>b;
    if(a>=b){
        ans+=a;
        a--;
    }else{
        ans+=b;
        b--;
    }
    ans+= max(a,b);
    cout<<ans<<endl;
    return 0;
}