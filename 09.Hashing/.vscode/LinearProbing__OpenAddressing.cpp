#include <iostream>
#include <list>
using namespace std;

class Hash
{
    int BUCKET, table[];

public:
    // Constructor
    Hash(int b)
    {
        BUCKET = b;
        table[BUCKET] = {0};
    }

    void insert(int key)
    {
        int i = key % BUCKET;
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

    return 0;
}