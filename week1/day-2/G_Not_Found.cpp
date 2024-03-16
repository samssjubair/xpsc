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
    string s;
    cin>>s;
    bool flag=false;
    for(char c='a';c<='z';c++){
        if(!(s.find(c)<s.length())){
            cout<<c<<endl;
            flag=true;
            break;
        }
    }
    
    if(!flag){
        cout<<"None"<<endl;
    }
    return 0;
}