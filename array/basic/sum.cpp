#include <iostream>
using namespace std;

int main() {
    int arr[5],s=0;
    cout<<"input element in array";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }

    cout<<"sum of all element is:";
    for(int i=0;i<5;i++)
    {
        s=s+arr[i];
       
    }
    cout<< s ;
    return 0;
}