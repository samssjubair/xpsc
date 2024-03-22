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
        bool flag = true;
        string s1,s2;cin>>s1>>s2;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                if ((s1[i] == 'G' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'G'))
                {
                    continue;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}