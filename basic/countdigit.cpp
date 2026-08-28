#include <iostream>
using namespace std;

int main() {
    int n,d,s=0,p=1,c=0;
    cout<<"enter a number";
    cin>>n;
    int t=n;
    while(t!=0)
    {
        d=t%10;
        s=s+d;
        p=p*d;
        c=c+1;
        t=t/10;
    }
    cout<<"sum of the digits :"<<s<<endl;
    cout<<"product of the digits :"<<p<<endl;
    cout<<"no of digit :"<<c;

    return 0;
}