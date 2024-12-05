/* Q1 There are N bowls numbered from 1 to N and each bowl can contain maximum 9 marbles. 
    A user has to add a marble to the last bowl i.e. Nth Bowl. If Nth bowl is full i.e. 
    it already has 9 marbles, you need to check in (N-1)th bowl. If (N-1)th bowl has space 
    to accomodate one more marble, then you need to add marble in it and remove all the marbles 
    from Nth bowl. You need to identify the bowl will be modified when you add a marble. 
    If all bowls are full, print output as 0.
*/
#include <iostream>
#include <vector>
using namespace std;

int findModifiedBowl(vector<int>& bowls) {
    int N = bowls.size();
    
    
    for (int i = N - 1; i >= 0; --i) {
        if (bowls[i] < 9) {
            bowls[i]++; 
            for (int j = i + 1; j < N; ++j) {
                bowls[j] = 0; 
            }
            return i + 1; // (1-based index)
        }
    }
    

    return 0;
}

int main() {
    int N;
    cin >> N;

    vector<int> bowls(N, 0); // Initialize all bowls with 0 marbles


    for (int i = 0; i < N; ++i) {
        cin >> bowls[i];
    }

    int modifiedBowl = findModifiedBowl(bowls);

    if (modifiedBowl == 0) {
        cout << "0" << endl;
    } else {
        cout <<modifiedBowl << endl;
    }

    return 0;
}
