#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;
int main()
{
    int n1,n2; cin>>n1>>n2;
    ll a[n1],b[n2];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    ll c[n1+n2];
    int k=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        c[k]=a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    for (int i = 0; i <n1+ n2; i++)
    {
        cout << c[i]<<" ";
    }
    return 0;
}