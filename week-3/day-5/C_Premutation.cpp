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
    while(t--){
        int n;cin>>n;
        int a[n][n-1];
        map<int,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>a[i][j];
                if(j==n-2){
                    m[a[i][j]]++;
                }
            }
        }
        int min=INT_MAX;
        int max=INT_MIN;
        for(auto it: m){
            if(it.second==1){
                min=it.first;
            }
            if(it.second!=1){
                max=it.first;
            }

        }
        // cout<<min;
        int resInd=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i][n-2]==min){
                resInd=i;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            cout<<a[resInd][i]<<" ";
        }
        cout<<max;
        cout<<endl;
    }
    return 0;
}