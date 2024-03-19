#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <queue>
#include <iomanip>

using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long> v;
    queue<int> q;
    int l=0,r=0;
    int firstNeg=0;
    while(r<n){
        if(a[r]<0){
            q.push(a[r]);
        }
        
        if(r-l+1==k){
            if(!q.empty()){
                // cout<<q.front()<<" ";
                v.push_back(q.front());
            }else{
                // cout<<0<<" ";
                v.push_back(0);
            }

            if (a[l] == q.front())
            {
                q.pop();
            }

            r++;
            l++;
        }
        else{
            r++;
        }
    }
    
    // while (!q.empty())
    // {
    //     v.push_back(q.front());
    //     q.pop();
    // }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << " ";
        }
    }
    return 0;
}