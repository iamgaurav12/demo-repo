#include <iostream>
using namespace std;

void Reverse(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    Reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}