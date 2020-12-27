#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{

    int temp[d];

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[i + d];
    }

    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
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

    leftRotate(arr, n, d);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}