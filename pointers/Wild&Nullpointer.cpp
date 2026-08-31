#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int *ptr;
    cout<<ptr<<" "<<*ptr<<endl;//wild pointer

    int *ptr= NULL;//null pointer
    {
        int x=10;
        ptr=&x;
    }


    return 0;
}