#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkPrefixSum(const vector<int> &v)
{
    int total_sum = 0;
    for (size_t i = 0; i < v.size(); ++i)
    {
        total_sum += v[i];
    }

    int prefix_sum = 0;
    for (size_t i = 0; i < v.size(); ++i)
    {
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;

        if (suffix_sum == prefix_sum)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    cout << "enter the no. of element";
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    cout << (checkPrefixSum(v) ? "true" : "false") << endl;
    return 0;
}