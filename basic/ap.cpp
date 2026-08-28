#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= 2 * n - 1; i += 2) {
        cout << i << " ";
    }
    cout << endl; // Adds a newline at the end

    return 0;
}