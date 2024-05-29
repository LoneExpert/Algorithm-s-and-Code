#include <iostream>
#include <vector>
using namespace std;

// BIT is always 1 index (Binary Index Tree)
vector<int> bit;

void update(int id, int val, int n)
{
    while (id <= n)
    {
        bit[id] += val;
        id += (id & -id);
    }
}

int query(int id)
{
    int ans = 0;
    while (id > 0)
    {
        ans += bit[id];
        id -= (id & -id);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    bit = vector<int>(n + 1, 0);
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];        // => populating fenwick tree with array value
        update(i, a[i], n); // => at each index
    }

    int q;
    cin >> q;
    while (q--)
    {
        int typeq;
        cin >> typeq;
        // Find the sum in L and R range
        if (typeq == 1)
        {
            int L, R;
            cin >> L >> R;
            int ans = query(R) - query(L - 1); // L and R needs to be  1-index
            cout << ans << endl;
        }
        // else{ // Replace the Value at that index (We can also add the value at that index)
        //     int id,val;
        //     cin>>id>>val;
        //     update(id,-a[id],n); // Firstly make it back to 0
        //     a[id] = val; // update your original input array 'a'
        //     update(id,a[id],n); // update the bit array
        // }
        else
        {   
            int id, val;
            cin >> id >> val;
            update(id, val - a[id], n); // Update with the difference between new and old value
            a[id] = val;                // Update the original input array 'a'
        }
    }
    return 0;
}

// Time Complexity log(n); => one query it will be qlog(n) => update case in the begining 0(nlogn)
// Space Complexity 0(n);