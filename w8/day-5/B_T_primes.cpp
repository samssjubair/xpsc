#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <climits>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <utility>

#define ll long long int

using namespace std;

bool isPrime(ll n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool isPerfectSquare(ll n){
    ll x= sqrt(n);
    return (x*x)==n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        if(isPrime(sqrt(a[i]))&& isPerfectSquare(a[i])){
            cout<<"YES"<<endl;
        }else{
            cout << "NO" << endl;
        }
    }



    return 0;
}