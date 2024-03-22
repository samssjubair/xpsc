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
        int n; string s;
        cin>>n>>s;
        if(n!=5){
            cout<<"NO"<<endl;
            continue;;
        }
        int T=0, j=0, m=0, u=0,r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                T++;
            }else if(s[i]=='i'){
                j++;
            }else if(s[i]=='m'){
                m++;
            }else if(s[i]=='u'){
                u++;
            }else if(s[i]=='r'){
                r++;
            }
        }

        if(T==1 && j==1 && m==1 && u==1 && r==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}