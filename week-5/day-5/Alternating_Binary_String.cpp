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
        int n;cin>>n;
        string s;cin>>s;
        int c=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                c++;
            }
        }
        cout<< c<<endl;
    }
    return 0;
}