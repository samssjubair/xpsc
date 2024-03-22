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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<string> v;
        for(int i=0;i<n;i++){
            int val;
            string s;
            cin>>val>>s;
            v.push_back(s);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<v[i].length();j++){
                if(v[i][j]=='U'){
                    a[i]--;
                }else if(v[i][j]=='D'){
                    a[i]++;
                }
                if(a[i]>9){
                    a[i]=0;
                }
                if(a[i]<0){
                    a[i]=9;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}