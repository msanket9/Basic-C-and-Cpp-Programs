#include <iostream>
using namespace std;
int interpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos;
	if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
		pos = lo
			+ (((double)(hi - lo) / (arr[hi] - arr[lo]))
				* (x - arr[lo]));
		if (arr[pos] == x)
			return pos;
		if (arr[pos] < x)
			return interpolationSearch(arr, pos + 1, hi, x);
		if (arr[pos] > x)
			return interpolationSearch(arr, lo, pos - 1, x);
	}
	return -1;
}
int main()
{
    int x, arr[10]; 
    cout<<"Enter 10 Numbers: ";
    for(int i=0; i<10; i++)
        cin>>arr[i];
    for(int i=0; i<10; i++)
        cout<<" "<<arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>x;
	int n = 9;
	int index = interpolationSearch(arr, 0, n - 1, x);
	if (index != -1)
		cout << "Element found at index " << index;
	else
		cout << "Element not found.";

	return 0;
}