#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--){
        ll n; char c;
        cin >> n >> c;
        string s;
        cin >> s;
        ll ans = 0;
        s.append(s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c){
                ll cnt=0;

                while(s[i] != 'g' && i < s.size()){
                    cnt++;
                    i++;
                }
                ans = max(ans, cnt);
            }
        }
        cout << ans << endl;
    }
    return 0;
}