#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

string longestGoodSubstring(const string& s) {
    unordered_set<char> uniqueChars;
    int maxLength = 0;
    int start = 0;
    int maxStart = 0;

    for (int end = 0; end < s.length(); ++end) {
        while (uniqueChars.find(s[end]) != uniqueChars.end()) {
            uniqueChars.erase(s[start]);
            ++start;
        }
        uniqueChars.insert(s[end]);
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
            maxStart = start;
        }
    }

    return s.substr(maxStart, maxLength);
}

int main() {
    string s;
    cin >> s;

    string result = longestGoodSubstring(s);
    cout << result.length() << endl;

    return 0;
}

