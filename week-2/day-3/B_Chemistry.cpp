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
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        map<char,int> mp;
        for(char ch: str){
            mp[ch]++;
        }
        int noOfOdd=0;
        for(auto it:mp){
            if(it.second%2!=0){
                noOfOdd++;
            }
        }
        // cout<<noOfOdd<<endl;
        bool isPossible=true;
        if(noOfOdd-k>1){
            isPossible=false;
        }
        cout<<(isPossible?"YES":"NO")<<endl;

    }
    return 0;
}