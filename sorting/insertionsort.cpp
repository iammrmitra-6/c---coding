#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void insertionSort(vector<int>& v) {
    int n=v.size();

    for(int i=0;i<=n;i++)
    {
        int current_ele=v[i];

        int j=i-1;
        while(j>=0 && v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }

        v[j+1]=current_ele;
    }
    
    }


int main() {
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};

    insertionSort(numbers);

    cout << "Sorted array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}