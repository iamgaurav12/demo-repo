#include <iostream>
using namespace std;

int ShiftArray(int arr[], int n,int k)
{
    // Step 1
    int temp[] = {50,60};
    // Step 2
    for (int i = n - k; i >= 0; i--)
    {
        arr[i] = arr[i - k];
    }
    // Step 3
    for (int i = 0; i < k; i++)
    {
        arr[i]=temp[i];
    }
    
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int k=2;
    ShiftArray(arr, n,k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}