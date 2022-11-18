#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;  //starting point
    int end = n;   //ending point
    while (start <= end)  
    {
        int mid = (start + end) / 2; //divide into two parts

        if (arr[mid] == key)  // 
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << "your value at index: " << binarySearch(arr, n, key);
    return 0;
}