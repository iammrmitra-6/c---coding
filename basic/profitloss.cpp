#include <iostream>
using namespace std;

int main() {
    int cp,sp,profit,loss;
    cout<<"enter cost price "<<endl;
    cin>>cp;
    cout<<"enter selling price "<<endl;
    cin>>sp;
    if(cp>sp)
    {
        cout<<"loss";
    }
    else if(cp<sp)
    {
        cout<<"profit";
    }
    else
    {
        cout<<"neither profit nor loss";
    }
    return 0;
}