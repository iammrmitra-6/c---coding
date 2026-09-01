#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> sortedSquaredArray(vector<int> &v)
{
    vector<int> ans(v.size());

    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans[i] = v[right_ptr] * v[right_ptr];
            right_ptr--;
        }
        else
        {
            ans[i] = v[left_ptr] * v[left_ptr];
            left_ptr++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter no of elements :";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    vector<int> result = sortedSquaredArray(v);
    cout << "finally sorted array in basic of even & odd is: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}