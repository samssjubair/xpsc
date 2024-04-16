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
        int t; cin>>t;
        while(t--){
            int n;cin>>n;
            string s;cin>>s;
            string result="";
            int l=0;
            int r=n-1;
            int gp=0,wI=0;
            while(l<r){
                if(s[l]==s[r]){
                    // gp++;
                    gp+=2;
                }else{
                    wI++;
                }
                l++;
                r--;
            }

            for(int i=0;i<=n;i++){
                int x=i;
                x-=wI;

                if(x<0){
                    result+='0';
                    continue;
                }

                x=max(x-gp,(x%2));
                x=max(x-(n%2),0);

                if(x==0){
                    result += '1';
                }else{
                    result += '0';
                }
            }

            cout<<result<<'\n';

        }
        return 0;
    }