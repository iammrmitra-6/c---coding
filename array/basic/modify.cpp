#include <iostream>
using namespace std;

int main() {
    int arr[5],s1=0,s2=0,s;
    cout<<"input element in array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }

    
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]*=2;
        }
        else{
            arr[i]+=9;
        }
    }
    cout<<"element are: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i] ;
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            s1=s1+arr[i];
        }
        else{
            s2=s2+arr[i];
        }
    }
    s=s2-s1;
    cout<<"sum are:"<<s;

    return 0;
}