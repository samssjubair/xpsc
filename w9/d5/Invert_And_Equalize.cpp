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
        int noZero=0;
        int noOne=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                noZero++;  
            }else{
                noOne++;
            }
        }
        
        for(int i=0;i<s.size()-1;i++){
            if (s[i]=='0' && s[i + 1]=='1')
            {
                c++;
            }
        }
        int cn=0;
        for(int i=0;i<s.size()-1;i++){
            if (s[i]=='1' && s[i + 1]=='0')
            {
                cn++;
            }
        }
        int a=0,b=0;
        // for (int i = 0; i < s.size() ; i++)
        // {
        //     while(s[i]=='0'){
                
        //         i++;
        //     }
        //     if(s[i-1]=='0'&&s[i]=='1'){
        //         a++;
        //     }
        // }
        
        for (int i = 0; i < s.size() ; i++)
        {
            if(s[i]=='0'){
                if(i==0 || s[i-1]=='1'){
                    a++;
                }
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (i == 0 || s[i - 1] == '0')
                {
                    b++;
                }
            }
        }
        // cout<<a<<" "<<b<<endl;
        cout<<min(a,b)<<endl;

        // if(noZero>noOne){
        //     cout<<c<<endl;
        // }else{
        //     cout << cn << endl;
        // }
    }
    return 0;
}