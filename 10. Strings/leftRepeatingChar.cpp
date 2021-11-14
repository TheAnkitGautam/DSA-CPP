#include <iostream>
using namespace std;

// int leftRepeatingChar(string &s)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = i + 1; j < s.length(); j++)
//         {
//             if (s[i] == s[j])
//                 return i;
//         }
//     }
//     return -1;
// }

// const int CHAR = 256;
// int leftRepeatingChar(string &s)
// {
//     int count[CHAR] = {0};
//     for (int i = 0; i < s.length(); i++)
//         count[s[i]]++;
//     for (int i = 0; i < s.length(); i++)
//         if (count[s[i]] > 1)
//             return i;
//     return -1;
// }
// const int CHAR = 256;
// int leftRepeatingChar(string &s)
// {
//     int fIndex[CHAR] = {0};
//     fill(fIndex, fIndex + CHAR, -1);
//     int res = INT_MAX;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (fIndex[s[i]] == -1)
//             fIndex[s[i]] = i;
//         else
//             res = min(res, fIndex[s[i]]);
//     }
//     return (res == INT_MAX) ? -1 : res;
// }

const int CHAR = 256;
int leftRepeatingChar(string &s)
{
    bool visited[CHAR];
    fill(visited, visited + CHAR, false);
    int res = -1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (visited[s[i]])
            res = i;
        else
            visited[s[i]] = true;
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << leftRepeatingChar(s);
    return 0;
}