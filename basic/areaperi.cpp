#include <iostream>
using namespace std;

int main() {
    int a,peri,area;
    cout<<"enter length of one side oa square";
    cin>>a;
    cout<<"perimeter of the square";
    peri=4*a;
    cout<<"area of the square";
    area=a*a;
    if (peri>area)
    {
        cout<<"perimeter is more than area";
    }
    else
    {
        cout<<"area is more than perimeter";
    }
    return 0;
}