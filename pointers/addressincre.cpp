#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    double d=9.8;
    int x=0;

    int *ptr=&x;
    double *ptrd= &d;

    cout<<"size of x is"<<sizeof(x)<<endl;
    cout<<"size of d is"<<sizeof(d)<<endl;

    cout<<ptr<<" "<<(ptr+1)<<endl;
    cout<<ptrd<<" "<<(ptr+1)<<" "<<(ptr+2)<<endl;
    return 0;
}