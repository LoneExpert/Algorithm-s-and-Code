#include <iostream>
#include <vector>

using namespace std;

class LinearProbingHashTable {
private:
    int tableSize;
    vector<int> table;
    int keysize;

public:
    LinearProbingHashTable(int size) : tableSize(size), table(size, -1) {
        cin >> keysize;
        for (int i = 0; i < keysize; i++) {
            int key;
            cin >> key;
            add(key);
        }
    }

    void add(int key) {
        int tableIndex = key % tableSize;
        int i = tableIndex;
        do {
            if (table[i] == -1) {
                table[i] = key;
                return;
            }
            i = (i + 1) % tableSize;
        } while (i != tableIndex);
    }

    void display() {
        for (int i = 0; i < 5; i++) {
            if (table[i] != -1) {
                cout << table[i] << " ";
            }
        }
    }
};

int main() {
    LinearProbingHashTable LPHT(5);
    LPHT.display();

    return 0;
}
