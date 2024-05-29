#include <iostream>

using namespace std;

// Function to perform string matching using the naive approach
void naiveStringMatch(const string& text, const string& pattern) {
    int m = text.length();
    int n = pattern.length();

    for (int i = 0; i <= m - n; i++) {
        int j;
        // Check for a match at the current position
        for (j = 0; j < n; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        // If the inner loop completed, a match is found
        if (j == n) {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main() {
    string text, pattern;

    cout << "Enter the text: ";
    cin >> text;

    cout << "Enter the pattern: ";
    cin >> pattern;

    naiveStringMatch(text, pattern);

    return 0;
}
