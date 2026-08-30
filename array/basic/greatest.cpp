#include <iostream>
using namespace std;
int main() {
    int arr[]={12,8,45,34,-9};
    int n =sizeof(arr)/4;
    int mx =arr[0];
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
    }
    cout<<mx;
    return 0;
}