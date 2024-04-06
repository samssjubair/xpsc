#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll cnt = 0;
        ll noOfOdd = 0;
        int l = 0, r = 0;

        while (r < n)
        {
            // bor = a[r]%2;
            if(a[r]%2==1){
                noOfOdd++;
            }
            if (r - l + 1 == k)
            {
                if (noOfOdd >= 1)
                {
                    cnt++;
                }
                // bor ^= a[l];
                if(a[l]%2==1){
                    noOfOdd--;
                }
                l++;
            }
            r++;
        }

        cout << cnt << endl;
    }

    return 0;
}
