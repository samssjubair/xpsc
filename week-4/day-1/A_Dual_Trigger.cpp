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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int noOfOne=0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                noOfOne++;
                v.push_back(i);
            }
        }

        if(noOfOne==2 && v[1]-v[0]==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<(noOfOne%2==0 ? "YES": "NO")<<endl;

    }
    return 0;
}