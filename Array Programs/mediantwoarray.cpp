#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int findMedian(int arr[], int n, int brr[], int m)
{

    int low = 0;
    int high = n;

    while (low <= high)
    {

        int maxLeftX;
        int minRightX;

        int maxLeftY;
        int minRightY;

        int partitionX = (low + high) / 2;
        int partitionY = (n + m + 1) / 2 - partitionX;

        if (partitionX == 0)
            maxLeftX = INT_MIN;
        else
            maxLeftX = arr[partitionX - 1];

        if (partitionX == n)
            minRightX = INT_MAX;
        else
            minRightX = arr[partitionX];

        if (partitionY == 0)
            maxLeftY = INT_MIN;
        else
            maxLeftY = brr[partitionY - 1];

        if (partitionY == m)
            minRightY = INT_MAX;
        else
            minRightY = brr[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX)
        {
            if ((n + m) % 2 == 0)
            {
                return (max(maxLeftX, maxLeftY), min(minRightX, minRightY)) / 2;
            }
            else
            {
                return max(maxLeftX, maxLeftY);
            }
        }
        else if (maxLeftX > minRightY)
        {
            high = partitionX - 1;
        }
        else
        {
            low = partitionX + 1;
        }
    }
}

int main()
{

    int x[] = {1, 2};
    int y[] = {2, 3, 4};

    int ans = findMedian(x, 2, y, 3);
    cout << "Median is: " << ans;
}