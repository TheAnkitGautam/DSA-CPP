#include <iostream>
#include <list>
using namespace std;

class Hash
{
    int BUCKET;
    list<int> *table;

public:
    // Constructor
    Hash(int b)
    {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }

    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }

    bool search(int key)
    {
        int i = key % BUCKET;
        for (auto &&x : table[i])
        {
            if (x == key)
                return true;
        }
        return false;
    }
};

int main()
{
    int a[] = {15, 11, 27, 8, 12, 21, 50};
    int n = sizeof(a) / sizeof(a[0]);

    Hash myHash(7);
    for (int i = 0; i < n; i++)
        myHash.insert(a[i]);

    cout << myHash.search(15) << endl;

    myHash.remove(15);

    cout << myHash.search(15) << endl;

    return 0;
}
