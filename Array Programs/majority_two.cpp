#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int num)
{

    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == num)
        return mid;
    else if (arr[mid] > num)
        return binarySearch(arr, l, mid - 1, num);
    else
        return binarySearch(arr, mid + 1, r, num);
}
int countOccur(int arr[], int n, int c)
{
    int ind = binarySearch(arr, 0, n - 1, c);

    // If element is not present
    if (ind == -1)
        return 0;

    // Count elements on left side.
    int count = 1;
    int left = ind - 1;
    while (left >= 0 && arr[left] == c)
        count++, left--;

    // Count elements on right side.
    int right = ind + 1;
    while (right < n && arr[right] == c)
        count++, right++;

    return count;
}

int majorityBinary(int arr[], int n, int x, int y)
{

    int count_x = countOccur(arr, n, x);
    int count_y = countOccur(arr, n, y);

    if (count_x == count_y)
    {
        if (x < y)
            return x;
        else
            return y;
    }

    if (count_x > count_y)
        return x;
    else
        return y;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int ans = majorityBinary(arr, n, 4, 5);
    cout << ans;
}