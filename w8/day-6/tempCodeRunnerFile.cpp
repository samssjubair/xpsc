#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;

bool isPrime(ll n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"1"<<endl;
    }else{
        cout << (n%2==0 ? "2": "3") << endl;
    }
    return 0;
}