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

/*interpolation searchhhhh
int interpolationSearch(int arr[], int low, int high, int x){
	int pos;
	if(low <= high && x >= arr[low] && x <= arr[high]){
		pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]));
		if(arr[pos] == x){
			return pos;
		}
		if(arr[pos] < x){
            return interpolationSearch(arr, pos+1, high, x);
		}
		if(arr[pos] > x){
            return interpolationSearch(arr, low, pos-1, x);
		}
	}
	return -1;
}
*/

//mergesort
void merge(vector<int>& arr, int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	vector<int> L(n1), R(n2);
	
	for(int i = 0; i < n1; i++){
		L[i] = arr[left + i];
		for(int j = 0; j < n2; j++){
			R[j] = arr[mid + 1 + j];
		}
	}
	int i = 0, j = 0;
	int k = left;
	
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j < n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(vector<int>& arr, int left, int right){
	if(left >= right){
		return;
	}
	int mid = left + (right - left) / 2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}
void printVector(vector<int>& arr){
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
//


int main(void){
	//sorting / searching algorithms :D
	
	
	
	//merge sort
	vector<int> arr = {42,63,62,13,85,93,28,20,58,10,1,59,2};
	int n = arr.size();
	
	printVector(arr);
	
	mergeSort(arr, 0 , n - 1);
	
	printVector(arr);
	//
	
	/*nterpolation search algorithm
	int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 13;
	int index = interpolationSearch(arr, 0, n-1, x);
	
	if(index != -1){
		cout << "pos: " << index;
	}else{
		cout << "invalid";
	}
	*/
	
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
