#include <iostream>
using namespace std;
int sum()
{
    int x,y;
    cout<<"enter 1st number :";
    cin>>x;
    cout<<"enter 2nd number ";
    cin>>y;
    int s1=x+y;
    return s1;
}
int main() {
    int a,b;
    cout<<"enter 1st number :";
    cin>>a;
    cout<<"enter 2nd number ";
    cin>>b;
    int s=a+b;
    cout<<"sum of 2 number "<<s;
    sum();
    return 0;
}