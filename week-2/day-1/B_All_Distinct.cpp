#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int a[n];
        set<int> s;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            s.insert(val);
        }
        cout<<s.size()<<endl;


    }
    return 0;
}