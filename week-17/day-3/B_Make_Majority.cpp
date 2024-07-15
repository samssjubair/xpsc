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
        int n;
        string str;
        cin >> n >> str;
        vector<bool> temp;
        char save = '1';
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0' && save == '1')
            {
                temp.push_back(false);
                save='0';
            }
            else if (str[i] == '1')
            {
                temp.push_back(true);
                save='1';
            }
        }

        int res1 = count(temp.begin(), temp.end(), 0);
        int res2 = count(temp.begin(), temp.end(), 1);


        cout<<(res1>=res2 ? "No\n" : "Yes\n");

    }
    return 0;
}