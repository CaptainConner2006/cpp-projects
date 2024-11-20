#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void randomize(int arr[], int n){
	unsigned seed = 0;
	shuffle(arr, arr + n, default_random_engine(seed));
}

void bubbleSortArr(int arr[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                //swapping values
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int arr[], int left, int mid, int right){
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

void mergeSort(int arr[], int left, int right){
	if(left >= right){
		return;
	}
	int mid = left + (right - left) / 2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}

int main(){
	int size = 100;
	size++;
	int* arr = new int[size];
	for(int i = 0; i < size; i++){
		arr[i] = i;
	}
	randomize(arr, size);
	bubbleSortArr(arr, size);//51.36 with 100000, 0.0806 with 100
	//mergeSort(arr, 0 , size - 1);//31,24 with 100000, 0.09199 with 100
	for(int i = 0; i < size; i++){
		cout << arr[i] << endl;
	}
	
	return 0;
}
