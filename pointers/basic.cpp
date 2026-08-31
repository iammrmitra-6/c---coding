#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int x=9;
    float y=6.8753;

    // create a pointer that can store address of x
    //as x is an integer variable, so we need a pointer
    // that can store address of interger type
    int*ptr =&x;
    cout<<"address stored inside ptr :"<<ptr<<endl;
    cout<<"value present at the address stored in ptr :"<<*ptr<<endl;

    /// create a pointer that can store address of y
    //as y is an float variable, so we need a pointer
    // that can store address of float type
    float *ptr1 =&y;
    cout<<"address stored inside ptr :"<<ptr1<<endl;
    cout<<"value present at the address stored in ptr :"<<*ptr1<<endl;

    //=---------=

    x=23;//the bucket x updated the value from 18 ->23
    //but ptr is still pointing to same bucket
    //now if we dereference ptr, we will get 23
    
    cout<<"New updated value of x :"<<x<<endl;
    cout<<"ptr still pointing to same memory which has 23 instead of 18 -"<<*ptr<<endl;

    //updating x with pointer
    *ptr =50;
    cout<<"new value of x is :"<<x<<endl;
    cout<<"new value pointed by ptr"<<*ptr<<endl;

    int valueAtX =*ptr;
    cout<<valueAtX<<endl;
    return 0;
}