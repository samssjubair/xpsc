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
    int n,x;
    cin>>n>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        v.push_back(val);
    }
    for(int i=0;i<n;i++){
        if(v[i]!=x){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}