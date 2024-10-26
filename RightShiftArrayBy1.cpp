#include <iostream>
using namespace std;

int ShiftArray(int arr[], int n)
{
    // Step 1
    int temp = arr[n - 1];
    // Step 2
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    // Step 3
    arr[0] = temp;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    ShiftArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}