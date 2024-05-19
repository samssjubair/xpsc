#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    int n;
    cin >> n;
    ll x;
    cin >> x;
    map<int, int> mp;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        int comp=x-arr[i];
        
        if(mp[comp]){
            ans.push_back(i+1);
            break;
        }else{
            // cout << "ku" << " ";
            // mp[comp]++;
            mp[arr[i]]++;
        }
    }
    cout<<ans[0]<<endl;
    return 0;
}