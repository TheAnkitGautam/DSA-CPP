#include <iostream>
using namespace std;
const int n = 4;

void searchNaive(int mat[n][n], int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == key)
            {
                cout << "Found at " << i << " " << j;
                return;
            }
        }
    }
    cout << "Not Found";
}

// Linear Solution
void search(int mat[n][n], int key)
{
    int i = 0, j = n - 1;
    while (i < n and j >= 0)
    {
        if (mat[i][j] == key)
        {
            cout << "Found at " << i << " " << j;
            return;
        }
        else if (mat[i][j] > key)
            j--;
        else
            i++;
    }
    cout << "Not Found";
}

int main()
{
    int mat[n][n] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    searchNaive(mat, 7);
    cout << endl;
    search(mat, 7);

    return 0;
}