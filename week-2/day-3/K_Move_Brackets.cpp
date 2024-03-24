#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <stack>
#include <iomanip>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        stack<char> s;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='('){
                s.push(str[i]);
            }else{
                if(s.size() && s.top()=='('){
                    s.pop();
                }else{
                    s.push(str[i]);
                }
            }
        }

        cout<<s.size()/2<<endl;

    }
    return 0;
}