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
    int a,b;
    cin >> a >> b;
    if(a>=b){
        cout<<0<<endl;
    }else{
        cout<<b-a+1<<endl;
    }
    return 0;
}