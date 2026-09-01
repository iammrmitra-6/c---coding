#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sortZeroesandOnes(vector<int> &v)
{
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr)
    {
        if(v[left_ptr] ==1 && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=0;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==0){
            right_ptr--;
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