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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(m+1);
    for(int i=0;i<=m;i++){
        cin>>a[i];
    }

    vector<vector<int> > all_masks;
    for(int i=0;i<=m;i++){
        vector<int> v;
        for(int k=0;k<n;k++){
            if(a[i]>>k & 1){
                v.push_back(1);
            }else{
                v.push_back(0);
            }
        }
        all_masks.push_back(v);
    }

    int ans=0;

    vector<int> fedor_mask =all_masks[m];

    for (int i = 0; i < m; i++)
    {
        int c=0;
        for (int k = 0; k < n; k++)
        {
            if(fedor_mask[k]!=all_masks[i][k]){
                c++;
            }
            
        }
        if(c<=k){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}