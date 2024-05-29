#include <iostream>
#include <typeinfo>
using namespace std;


void generatePermutations(string& str, int start, int end) {
    if (start == end) {
        int a=stoi(str);
        // cout <<typeid(a).name() <<endl;
        cout <<a<<endl;
        return;
    }

    for (int i = start; i <= end; ++i) {
        swap(str[start], str[i]);
        generatePermutations(str, start + 1, end);
        swap(str[start], str[i]);
    }
}

int main() {
    string str = "123";  // Replace with your sequence
    int n = str.length();

    generatePermutations(str, 0, n - 1);

    return 0;
}




// #include<iostream>
// #include<vector>
// using namespace std;

// void generatePermutations(vector<int>& nums, int start, int end) {
//     if (start == end) {
//         // Print the current permutation
//         for (int num : nums) {
//             cout << num << " ";
//         }
//         cout << endl;
//         return;
//     }

//     for (int i = start; i <= end; ++i) {
//         swap(nums[start], nums[i]);  // Swap the current element with each element to its right
//         generatePermutations(nums, start + 1, end);  // Recursively generate permutations for the remaining elements
//         swap(nums[start], nums[i]);  // Backtrack to restore the original order
//     }
// }

// int main() {
//     vector<int> nums = {1, 2, 3}; // Replace with your sequence
//     int n = nums.size();

//     generatePermutations(nums, 0, n - 1);

//     return 0;
// }