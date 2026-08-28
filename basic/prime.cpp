#include <iostream>
using namespace std;

int main() {
    int n,c=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=2;i>=n;i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if(c==1)
    {
        cout<<"composite number";
    }
    else{
        cout<<"prime number";
    }
    return 0;
}