#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int x=9;
    float y=9.34;

    int *ptr=&x;
    cout<<ptr<<endl;//print the adddres of x

    float *ptr1=&y;
    cout<<ptr1<<endl;//print the address of y

    int *ptr2;//assigning a pointer variable by using *
    int marks=90;
    ptr2=&marks;//reasign address of variable marks in it.
    cout<<ptr2<<endl;//finally printing the value of it

    return 0;
}