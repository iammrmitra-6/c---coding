#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    float f=9.87;
    int c=1;
    void *ptr=&f;
    ptr=&c;

    int *intpoint =(int *)ptr;

    cout<<*intpoint<<endl;
    return 0;
}