#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cout<<"enter 1st number :";
    cin>>a;
    cout<<"enter 2nd number :";
    cin>>b;
    cout<<"enter 3rd number :";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        cout<<"valid trinagle";
    }
    else{
        cout<<"invalid triangle";
    }
    return 0;
}