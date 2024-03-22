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
        int noOfDistinct = s.size();

        if ((n - noOfDistinct)%2==1){
            noOfDistinct--;
        }
        cout<<noOfDistinct<<endl;
    }
    return 0;
}