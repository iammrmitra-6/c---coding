#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isIsomorphic(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    // Tracks the last seen index (+1 to avoid 0 default issue) for each character
    vector<int> v1(256, -1);
    vector<int> v2(256, -1);

    for (int i = 0; i < s1.size(); i++) {
        // Cast to unsigned char to safely index extended ASCII characters
        unsigned char c1 = s1[i];
        unsigned char c2 = s2[i];

        if (v1[c1] != v2[c2]) {
            return false;
        }

        v1[c1] = i;
        v2[c2] = i;
    }

    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (isIsomorphic(s1, s2)) {
        cout << "they are isomorphic" << endl;
    } else {
        cout << "they are not isomorphic" << endl;
    }

    return 0;
}