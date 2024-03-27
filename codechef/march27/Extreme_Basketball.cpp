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
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int scoreNeeded=b+10;
        int shotsNeeded=0;
        // cout<<(scoreNeeded-1)/a<<endl;
        while(a<scoreNeeded){
            shotsNeeded++;
            a+=3;
        }
        cout<<shotsNeeded<<endl;
    }
    return 0;
}