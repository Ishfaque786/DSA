#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int first, int second)
{
    int temp = arr[second];
    arr[second] = arr[first];
    arr[first] = temp;
}
void selectionSort(int arr[], int n)
{

    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr, min, i);
    }
}

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}