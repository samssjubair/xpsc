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

vector<int> gen_primes(int limit)
{
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= limit; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= limit; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    vector<int> primes = gen_primes(9999);

    while(t--){
        int n;cin>>n;
        int num_primes = primes.size();
        // cout<<num_primes<<endl;
        unordered_set<int> prime_squares;
        for (int i = 0; i < num_primes; ++i)
        {
            prime_squares.insert(primes[i] * primes[i]);
        }
        bool flag=false;
        for (int i = 0; i < primes.size(); i++)
        {
            if (primes[i] * primes[i] >= n)
                break;
            for (int j = i + 1; j < primes.size() - 1; j++)
            {
                int x = n - (primes[i] + primes[j]);
                if (x <= 0)
                    break;
                if (prime_squares.find(x) != prime_squares.end() && x != primes[i] && x != primes[j])
                {
                    flag = true;
                    break;
                }
            }
            
        }

        cout<<(flag ? "Yes": "No")<<endl;

    }
    return 0;
}