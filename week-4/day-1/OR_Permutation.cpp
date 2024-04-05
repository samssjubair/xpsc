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
            int n;
            cin>>n;
            for(int i=n;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return 0;
    }