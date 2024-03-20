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
    string txt,pat;
    cin>>txt>>pat;
    int ans=0;
    int l=0,r=0;
    
    vector<int> txtMap(26, 0);
    vector<int> patMap(26, 0);

    for (int ch = 0; ch < pat.size(); ch++)
    {
        patMap[pat[ch] - 'a']++;
    }

    while(r<txt.size()){
        txtMap[txt[r] - 'a']++;
        if(r-l+1==pat.size()){
            if(patMap==txtMap){
                ans++;
            }
            txtMap[txt[l] - 'a']--;
            r++;
            l++;
        }
        else{
            r++;
        }
        

    }
    cout<<ans<<endl;

    return 0;
}