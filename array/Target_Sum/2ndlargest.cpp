#include <iostream>
#include <climits>
using namespace std;

int largestelementindex(int array[], int size)
{
    int max = INT_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    int array[] = {1, 4, 5, 3, 6, 2, 9};
    int indexoflargest = largestelementindex(array, 7);

    array[indexoflargest] = -1;

    int indexofsecondlar = largestelementindex(array, 7);
    cout << "2nd largest element is :" << array[indexofsecondlar] << endl;
    return 0;
}