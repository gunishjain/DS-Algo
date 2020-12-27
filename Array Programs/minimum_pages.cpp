#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int sumAll(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

bool isValid(int arr[], int n, int k, int mid)
{
    int s = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mid)
        {
            s++;
            sum = arr[i];
        }

        if (s > k)
            return false;
    }
    return true;
}

int allocatefun(int arr[], int n, int k)
{
    int start = *max_element(arr, arr + n);
    int end = sumAll(arr, n);
    int res = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(arr, n, k, mid) == true)
        {
            res = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return res;
}

int main()
{

    int n, k;
    cin >> n;

    cin >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sumAll(a, n);

    int ans = allocatefun(a, n, k);
    cout << "Answer is: " << ans;
}