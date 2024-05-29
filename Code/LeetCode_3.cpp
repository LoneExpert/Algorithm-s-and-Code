// Longest Substring Without Repeating Characters
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int left = 0;
    int right = 0;
    int len = 0;
    vector<int> mp(256, -1);
    while (right < n)
    {
        if (mp[s[right]] != -1)
        {
            left = max(mp[s[right]]+1, left);
        }
        mp[s[right]] = right;
        len = max(right - left + 1, len);
        right++;
    }
    cout << len << endl;

    return 0;
}