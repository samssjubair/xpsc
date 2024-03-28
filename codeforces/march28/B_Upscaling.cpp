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
        cin>>n;
        // int k=0;
        for(int i=0;i<n*2;i++){
            for(int j=0;j<n;j++){
                if((i/2)%2==0){
                    if(j%2==0){
                        cout << "##";
                    }else{
                        cout << "..";
                    }
                }
                else{
                    if (j % 2 == 0)
                    {
                        cout << "..";
                    }
                    else
                    {
                        cout << "##";
                    }
                }
            }
            cout<<endl;
        }
        // cout << endl;
    }
    return 0;
}