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
    int a,b,c;
    cin>>a>>b>>c;
    int ans=-1;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            ans=i;
            break;
        }
    }
    if(ans==-1){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}