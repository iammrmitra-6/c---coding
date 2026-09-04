#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void selectionSort(vector<int> &v)
{
    int n=v.size();

    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[min_index])
            {
                min_index=j;
            }
        }
    

    if(i!=min_index)
    {
        swap(v[i],v[min_index]);
    }
}
}

int main() {
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};

    selectionSort(numbers);

    cout << "Sorted array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}