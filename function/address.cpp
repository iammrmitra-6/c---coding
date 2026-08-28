#include <iostream>
using namespace std;

int main() {
    int x=9;
    int* p= &x;
    int y=19;
    int* s= &y;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<*p<<endl; //star operator->value in &x
    cout<<&p<<endl; //address 

    return 0;
}