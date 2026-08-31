#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void process(int *arr,int n)
{
    //inside this function we have the access of the same array
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";//array itself work as a call by reference
    }
    *(arr+1)=33;
    cout<<endl;
}
int main() {
    int arr[3]={5,1,2};
    process(arr,3);

    for(int i =0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}