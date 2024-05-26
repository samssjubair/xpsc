#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <iomanip>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;cin>>n;
    string s, r;cin>>s;
    r=s;
    reverse(r.begin(),r.end());

    map<char, vector<int> > pos_s,pos_r;
    for(int i=0;i<n;i++){
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<int> permutation(n);

    for(char ch='a';ch<='z';ch++){
        for(int i=0;i<pos_s[ch].size();i++){
            permutation[pos_r[ch][i]]=pos_s[ch][i];
        }
    }

    pbds<int> p;

    ll res=0;
    for(int i=n-1;i>=0;i--){
        res+=p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }

    cout << res << endl;
    return 0;
}