#include <iostream>
using namespace std;

int main() {
    // Input array of integers
    int array[] = {3, 1, 2, 4, 0, 6};
    
    // Target sum we are searching for using three numbers
    int targetsum = 6;

    int size = 6;
    
    // Counter variable to keep track of valid triplets (renamed from pairs)
    int triplets = 0;

    // First loop selects the first element of the triplet
    for (int i = 0; i < size; i++)
    {
        // Second loop selects the second element (starts after i to avoid duplicates)
        for (int j = i + 1; j < size; j++)
        {
            // Third loop selects the third element (starts after j to avoid duplicates)
            for (int k = j + 1; k < size; k++) {
                
                // Check if the sum of the three chosen elements equals the target sum
                if (array[i] + array[j] + array[k] == targetsum)
                {
                    triplets++; // Increment count when a valid triplet is found
                }
            }
        }
    }
    
    // Output the total count of matching triplets
    cout << "no of triplets :" << triplets << endl;
    
    return 0;
}