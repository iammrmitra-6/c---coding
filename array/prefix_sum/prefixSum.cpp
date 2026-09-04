#include <bits/stdc++.h>
#include <iostream>
using namespace std;


void runningSum(vector<int> &v)
{
    for(int i=1; i<v.size(); ++i)
    {
        v[i]=v[i-1]+v[i];
    }
}

int main() {
    cout<<"enter the no. of element";
    int n;
    cin>>n;

    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    runningSum(v);

    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}