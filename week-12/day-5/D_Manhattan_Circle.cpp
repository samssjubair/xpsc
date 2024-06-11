#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <climits>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <utility>

#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int colStart=0,colEnd, rowStart=0, rowEnd;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                char c;
                cin>>c;
                if(c=='#'){
                    if(colStart==0){
                        colStart=j;
                        rowStart=i;
                    }
                    colEnd=j;
                    rowEnd=i;

                }
            }
        }
        // cout<<rowStart<<" "<<colStart<<" "<<rowEnd<<" "<<colEnd<<endl;
        cout<<(rowEnd+rowStart)/2 << " "<<colEnd<<endl;
    }
    return 0;
}