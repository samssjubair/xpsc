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
        string s1,s2;
        cin>>s1>>s2;
        int p1=0,p2=0;
        int draw= 0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                continue;
            }else{
                char a=s1[i];
                char b=s2[i];
                if ((a == 'R' && b == 'S') || (a == 'S' && b == 'P') || (a == 'P' && b == 'R'))
                {
                    p1++;
                }else{
                    // p2++;
                    p1--;
                }
            }
        }
        // cout<<p2-p1<<endl;
        if (p1>0)
        {
            cout << 0 << endl; 
        }
        else if(p1==0){
            cout<<1<<endl;
        }
        else
        {
            cout << ((-1*p1)/2)+1<< endl;
        }
    }
    return 0;
}