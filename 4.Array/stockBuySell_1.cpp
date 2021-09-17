#include <iostream>
using namespace std;

// Naive Solution
int maxPro(int price[], int start, int end)
{
    if (end <= start)
        return 0;
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (price[j] > price[i])
            {
                int currPro = price[j] - price[i] + maxPro(price, start, i - 1) + maxPro(price, j + 1, end);
                profit = max(profit, currPro);
            }
        }
    }
    return profit;
}
int main()
{
    int arr[] = {1, 5, 3, 8, 12};
    cout << maxPro(arr, 0, 4) << endl;
    return 0;
}