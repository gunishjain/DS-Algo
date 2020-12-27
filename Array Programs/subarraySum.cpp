#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int n, int sum)
{

    unordered_map<int, int> map;

    int curr_sum = 0;

    for (int i = 0; i < n; i++)
    {

        curr_sum = curr_sum + arr[i];

        if (curr_sum == sum)
        {
            cout << 1 << " " << i + 1 << endl;
            return;
        }

        if (map.find(curr_sum - sum) != map.end())
        {
            cout << map[curr_sum - sum] + 2 << " " << i + 1 << endl;
            return;
        }

        map[curr_sum] = i;
    }

    cout << -1;
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

    subarraySum(arr, n, 6);
}