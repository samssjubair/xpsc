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
        int n;cin>>n;
        string s1;
        cin>>s1;
        bool metB = false;
        int a = 0, c = 0;

        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == 'b')
            {
                metB = true; 
            }
            
             if (!metB && s1[i] == 'a')
            {
                a++; 
            }
            else if (metB && s1[i] == 'c')
            {
                c++;
            }
        }
        cout<<(a+c)-2<<endl;
    }
    return 0;
}