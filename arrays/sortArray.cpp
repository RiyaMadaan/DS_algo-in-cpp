// Sort a given array into ascending order
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "\tSorting Array in Ascending Order\n\n";
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array\n";
    for (int index = 0; index < size; index++)
    {
        cout << index + 1 << " : ";
        cin >> arr[index];
    }

    cout << "Array Before Sorting : ";
    for (int index = 0; index < size; index++)
        cout << arr[index] << " ";
    cout << "\n";

    sort(arr, arr + size);

    cout << "Array After Sorting : ";
    for (int index = 0; index < size; index++)
        cout << arr[index] << " ";

    return 0;
}
