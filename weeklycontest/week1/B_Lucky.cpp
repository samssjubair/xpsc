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
    while(t--)
    {
        string s;
        cin>>s;
        int first3digitSum=0;
        int last3digitSum=0;
        for(int i=0;i<3;i++){
            first3digitSum+=s[i]-'0';
        }
        for(int i=3;i<6;i++){
            last3digitSum+=s[i]-'0';
        }
        cout<< first3digitSum<<last3digitSum<<'\n';
        cout<<(first3digitSum==last3digitSum?"YES":"NO")<<'\n';
    }
    return 0;
}