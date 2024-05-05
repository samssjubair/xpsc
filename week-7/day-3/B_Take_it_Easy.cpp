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
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        int sum=0;
        int hasOdd=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2!=0) hasOdd++;
        }

        if(sum%n!=0){
            cout<<"No"<<endl;
            continue;
        }

        sum=sum/n;

        bool flag=false;

        for(int i=0;i<n;i++){
            if(a[i]%2!= sum%2){
                flag=true;
                break;
            }
        }

        if(flag) {
            cout<<"No"<<endl;
            continue;
        }
    
        cout<<"Yes"<<endl;


    }
    
    return 0;
}