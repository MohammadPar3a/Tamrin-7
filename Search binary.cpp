#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 12, 40, 60 ,90 };
	int x;
	cout << "{ 2, 3, 4, 10, 12, 40, 60 ,90 }" << endl;
	cout << "Adade mored nazar khod ra az majmoeo vared konid: ";
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Adade mored nazar shoma dar majmoeo nist!!!!" : cout << "Adade mored nazar shoma dar index " << result << " gharar dard." << endl;
	return 0;