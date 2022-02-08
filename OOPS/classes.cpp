#include <iostream>
using namespace std;

class Hero
{
public:
    static int time;
};
int Hero::time = 0;
int main()
{
    // Hero::time = 5;
    cout << Hero::time << endl;
}
