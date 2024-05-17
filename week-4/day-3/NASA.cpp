#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>

using namespace std;

const int maxN = (1 << 15);
vector<int> all_palindromes;

void mark_palindromes(){
    for(int i=0;i<maxN;i++){
        string s= to_string(i);
        int len=s.length();
        bool ok=true;
        for(int j=0;j<(len/2);j++){
            if(s[j]!=s[len-j-1]){
                ok=false;
                break;
            }
        }
        if(ok){
            all_palindromes.push_back(i);
        }
    }
}


int main()
{
    mark_palindromes();
    int t;cin>>t;
    
     while (t--)
    {
        int n;cin>>n;
        vector<int> cnt(maxN), a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
            a.push_back(x);
        }

        long long ans=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<all_palindromes.size();j++){
                int cur=(a[i]^all_palindromes[j]);
                ans+=cnt[cur];
            }
        }
        cout<< ans/2<<endl;
    }
    return 0;
}