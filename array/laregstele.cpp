#include <iostream>
using namespace std;
#include<climits>
int largestelement(int array[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}

int main() {
    int array1[]={1,6,8,9,3,1,5};
    cout<<largestelement(array1,7)<<endl;
    return 0;
}