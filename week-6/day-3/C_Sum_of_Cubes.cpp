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

const int maxN = 1e4;

//sum of cubes

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    vector<ll> pw;

    for(ll i=1; i<=maxN; i++)
    {
        pw.push_back(i*i*i);
    }

    int t;cin>>t;
    while(t--){
        ll x;
        cin>>x;
        bool found=false;

        for(int i=0; i<maxN; i++)
        {
            if(pw[i]>=x)
            {
                break;
            }
            int l=0, r=maxN-1,mid;
            ll need=x-pw[i];
            bool ok=false;
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(pw[mid]==need)
                {
                    ok=true;
                    break;
                }
                else if(pw[mid]<need)
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }

            if(ok)
            {
                found=true;
                break;
            }

        }

        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}