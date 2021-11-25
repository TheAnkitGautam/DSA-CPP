#include <iostream>
using namespace std;

const int n = 4;

void rotate90_Naive(int mat[n][n])
{
    int temp[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - j - 1][i] = mat[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = temp[i][j];
}

void transposeEfficient(int mat[n][n])
{

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(mat[i][j], mat[j][i]);
}

void rotate90_Eff(int mat[n][n])
{
    transposeEfficient(mat);

    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
        }
    }
}

int main()
{
    int mat[n][n] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    // rotate90_Naive(mat);
    rotate90_Eff(mat);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}