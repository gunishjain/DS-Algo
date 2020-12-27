#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int lcs(string str1, string str2, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (str1[i - 1] == str2[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n];
}

int main()
{

    string str1 = "bd";
    string str2 = "abcd";

    int m = str1.size();
    int n = str2.size();

    cout << "Given two Strings are: \n"
         << str1 << "\n"
         << str2 << endl;

    cout << "Length of LCS is "
         << lcs(str1, str2, m, n);

    return 0;
}