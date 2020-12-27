#include <iostream>
#include <stdio.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int n = 8;
    int A[] = {1, 2, 5, 6, 35, 11, 34, 69};

    int ans = secondLargest(A, n);
    cout << "Answer is: " << A[ans];
}