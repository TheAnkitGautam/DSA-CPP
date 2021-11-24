#include <iostream>
using namespace std;

void patSearch(string &txt, string &pat)
{
    int M = pat.length();
    int N = txt.length();
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M)
            cout << i << " ";
    }
}

int main()
{
    string txt, pat;
    cin >> txt >> pat;
    patSearch(txt, pat);
    return 0;
}