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
    int n;cin>>n;
    vector<bool> prime(n+1,true);
    prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i+i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}