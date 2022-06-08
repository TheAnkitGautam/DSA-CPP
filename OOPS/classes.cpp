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
    
    cout << Hero::time << endl;
}
