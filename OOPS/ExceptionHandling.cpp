#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    try
    {
        if (y == 0)
            throw string("Division by zero");
        cout << x / y << endl;
    }
    catch (...)
    {
        cout << "Division by zero" << endl;
    }
    return 0;
}