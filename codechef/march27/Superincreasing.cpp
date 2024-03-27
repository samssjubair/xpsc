#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll s=0;
        ll i=0;
        // int k=1;
        while(i<k-1){
            if(i>62){
                s=LLONG_MAX;
                break;
            }
            // s+=pow(2,i);
            s=(2*s)+1;
            // cout<<i<<"->"<<s<<" ";
            i++;
        }
        // cout<<s<<endl;
        if(n==1){
            cout << "Yes" << endl;
            // return 0;
            continue;
        }
        if(s<x){
            cout<<"Yes"<<endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}