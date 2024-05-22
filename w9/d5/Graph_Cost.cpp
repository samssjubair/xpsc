#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <stack>
#include <iomanip>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        stack<int> st1, st;
        long long cost = 0;

        for (int t = 0; t < n; t++)
        {
            while (st1.size() > 1 && st1.top() > v[t])
            {
                int s1 = st1.top();
                st1.pop();
                if (s1 >= st1.top())
                {
                    st.pop();
                }
                else
                {
                    st1.push(s1);
                    break;
                }
            }
            st1.push(v[t]);
            st.push(t);
        }

        int last_item = st1.top();
        st1.pop();
        int g = st.top();
        st.pop();

        while (!st1.empty())
        {
            cost += static_cast<long long>(max(last_item, st1.top())) * (g - st.top());
            last_item = st1.top();
            st1.pop();
            g = st.top();
            st.pop();
        }

        cout << cost << '\n';
    }
    return 0;
}