#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printk(int i, int arr[], int n, int sum, int k)
{
    if (i == n)
    {

        if (sum == k)
        {
            return 1;
        }
        return 0;
    }

    sum += arr[i];
    int l = printk(i + 1, arr, n, sum, k);
    sum -= arr[i];
    int r = printk(i + 1, arr, n, sum, k);
    return l + r;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum: ";
    int k;
    cin >> k;

    cout << printk(0, arr, n, 0, k);

    return 0;
}
