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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int x=0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a[i]=tmp;
            x^=tmp;
        }
        if(n%2==0){
            if(x==0){
                cout<<0<<endl;
            }else{
                cout << -1 << endl;
            }
        }else{
            cout<<x<<endl;
        }
        
    }
    // cout << (0^(1 ^ 3) ^ (2 ^ 3) ^ (3 ^ 3)) << endl;
    // cout<<(0^1^2^3)<<endl;
    return 0;
}