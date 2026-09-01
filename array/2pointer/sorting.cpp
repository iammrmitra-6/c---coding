#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sortZeroesandOnes(vector<int> &v)
{
    int zeros_count =0;

    for(int ele:v)
    {
        if(ele==0)
        {
            zeros_count++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeros_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
        
    }
}

int main() {
    int n;
    cout<<"enter no of elements :";
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortZeroesandOnes(v);
    cout<<"finally sorted array in basic of 0 & 1 is: ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}