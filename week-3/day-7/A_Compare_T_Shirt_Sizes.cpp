#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<s1.size();i++){
            m1[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++){
            m2[s2[i]]++;
        }
        if(m1['S'] && m2['L']){
            cout<<'<'<<endl;
        }
        else if (m1['L'] && m2['S'])
        {
            cout<<'>'<<endl;
        }
        else if (m1['M'] && m2['M'])
        {
            cout << '=' << endl;
        }
        else if (m1['M'] && m2['S'])
        {
            cout << '>' << endl;
        }
        else if (m1['S'] && m2['M'])
        {
            cout << '<' << endl;
        }
        else if (m1['M'] && m2['L'])
        {
            cout << '<' << endl;
        }
        else if (m1['L'] && m2['M'])
        {
            cout << '>' << endl;
        }
        else{
            if (m1['X'] > m2['X'] && m1['S'] && m2['S'])
            {
                cout << '<' << endl;
            }
            else if (m1['X'] < m2['X'] && m1['S'] && m2['S'])
            {
                cout << '>' << endl;
            }
            else if (m1['X'] < m2['X'] && m1['L'] && m2['L'])
            {
                cout << '<' << endl;
            }
            else if (m1['X'] > m2['X'] && m1['L'] && m2['L'])
            {
                cout << '>' << endl;
            }else{
                cout << '=' << endl;
            }
        }
    }
    return 0;
}