#include <iostream>
#include <math.h>
using namespace std;

int jumpSearch(int arr[], int x, int n)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;

    return -1;
}
int main()
{
    int x, arr[10];
    cout << "Enter 10 Numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    for (int i = 0; i < 10; i++)
        cout << " " << arr[i];
    cout << "\nEnter a Number to Search: ";
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = jumpSearch(arr, x, n);
    cout << "\nNumber " << x << " is at index " << index;
    return 0;
}
