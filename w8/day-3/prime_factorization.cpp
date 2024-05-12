#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;
int main()
{
    int n=20;
    vector<bool> prime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i+i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> allPrime;
    for (int i = 2; i <= n; i++)
    {
        if(prime[i]){
            allPrime.push_back(i);
        }
    }

    map<int,int>cnt;
    int x;cin>>x;
    int idx=0;
    
    while(x>1){
        if(x%allPrime[idx]==0){
            cnt[allPrime[idx]]++;
            x/=allPrime[idx];
        }else{
            idx++;
        }
    }
    for(auto [x,y]: cnt){
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}