#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n, int k)
{

    int temp[k];

    for (int i = 0; i < k; i++)
        temp[i] = arr[i];

    for (int i = 0; i < k; i++)
        arr[i] = temp[k - i - 1];

    int tempnew[n - k];
    for (int i = 0; i < n - k; i++)
        tempnew[i] = arr[k + i];

    for (int i = k; i < n; i++)
        arr[i] = tempnew[n - i - 1];
}

int main()
{

    int n;
    cin >> n;
    int d;
    cin >> d;
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    reverse(arr, n, d);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}