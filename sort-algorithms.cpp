#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/*linear search ohh yeah
int search(vector<int> arr, int x){
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] == x){
			return i;
		}
	}
	return -1;
}
*/

/*binary search so handy for complex arrays
int binarySearch(int arr[], int low, int high, int x){
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == x)
			return mid;
		if(arr[mid] < x)
			low = mid + 1;
		else
			high = mid -1;
	}
	return -1;
}
*/

int main(void){
	//sorting / searching algorithms :D
	
	
	/*binary search
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int x = 20;
	//cout << "enter num to search: ";
	//cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int index = binarySearch(arr, 0, n - 1, x);
	if(index == -1)
		cout << "invalid";
	else
		cout << "num found at index: " << index;
	*/
	
	/*linear search
	vector<int> arr = {9,8,5,3,1,4,2,6,7};
	int x;
	cout << "enter num to find 1-9: ";
	cin >> x;
	int index = search(arr, x);
	
	if(index == -1){
		cout << "not existing";
	}else{
		cout << "num found at index: " << index;
	}
	*/
	
	return 0;
}
