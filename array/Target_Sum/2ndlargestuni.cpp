#include <iostream>
#include <climits> // Required for INT_MIN
using namespace std;

// Function to find the INDEX of the maximum element in an array
int largestelementindex(int array[], int size)
{
    int max = INT_MIN;      // Initialize max with the smallest possible integer
    int maxindex = -1;      // Default index if array is empty or invalid
    
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i]; // Update the largest value found so far
            maxindex = i;   // Update the index of the largest value
        }
    }
    return maxindex; // Returns the index of the largest element
}


// ALTERNATE APPROACH: Single-pass O(N) method to find the second largest element
// Does NOT modify the original array
int getSecondLargest(int array[], int size) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        // Case 1: Found a new maximum element
        if (array[i] > largest) {
            secondLargest = largest; // Demote previous largest to secondLargest
            largest = array[i];      // Update largest to the new value
        } 
        // Case 2: Element is between 'secondLargest' and 'largest' (and not equal to 'largest')
        else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i]; // Update only secondLargest
        }
    }

    return secondLargest;
}

int main()
{
    int array[] = {1, 4, 5, 3, 6, 2, 9};
    int size = 7;
    
    // --- METHOD 1: Two-Pass Approach (Modifying Array Elements) ---
    
    // Step 1: Find the index of the largest element (9 is at index 6)
    int indexoflargest = largestelementindex(array, 7);

    // Step 2: Store the value of the largest element (9)
    int largestelement = array[indexoflargest];
    
    // Step 3: Replace ALL instances of the largest element with -1 
    // (This handles duplicate max values correctly, e.g., if array had multiple 9s)
    for (int i = 0; i < size; i++)
    {
        if (array[i] == largestelement)
        {
            array[i] = -1; // Mask out the largest element
        }
    }
    
    // Step 4: Find the index of the new maximum element (which is now 6)
    int indexofsecondlar = largestelementindex(array, 7);
    
    // NOTE: In Method 1, array[indexofsecondlar] prints -1 for the second call because 
    // the array elements were modified in-place, affecting the second method call below!
    cout << "2nd largest element is :" << array[indexofsecondlar] << endl;
    
    
    // --- METHOD 2: Single-Pass Approach ---
    // Note: Since Method 1 changed 9 to -1 in 'array', 
    // getSecondLargest() will treat 6 as 'largest' and 5 as 'secondLargest' on this modified array.
    cout << "2nd largest element is :" << getSecondLargest(array, 7) << endl;
    
    return 0;
}