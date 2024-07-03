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

int hammingDistance(string s1, string s2){
    int count = 0;
    for(int i=0;i<s2.length();i++){
        if(s1[i] != s2[i]){
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        string s1,s2;cin>>s1>>s2;

        int min_hamming = n;
        for(int i=0;i<=n-m;i++){
            string temp = s1.substr(i,m);
            // cout<<temp<<endl<<s2<<endl;
            min_hamming = min(min_hamming,hammingDistance(s2,temp));
        }
        cout<<min_hamming<<endl;

    }
    return 0;
}