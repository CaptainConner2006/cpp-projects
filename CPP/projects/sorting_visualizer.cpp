#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;

void clearScreen(){
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void displayArr(const vector<int>& arr){
	for(int value : arr) {
		cout << string(value, '|') << "\n";
	}
	cout << "\n";
}

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
	clearScreen();
	displayArr(arr);
	this_thread::sleep_for(chrono::milliseconds(5));
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

void bubbleSort(vector<int>& arr, int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                //swapping values
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
				clearScreen();
				displayArr(arr);
				this_thread::sleep_for(chrono::milliseconds(5));
            }
        }
    }
}

int main(){
	srand(time(0));//for the random num gen
	
	//make array
	int size = 50;
	vector<int> arr(size);
	for(int i = 0; i < size; i++){
		arr[i] = rand() % 200 + 1; //random numbers between 1 & 20
	}
	vector<int> oldArr = arr;
	
	//sort and visualization
	this_thread::sleep_for(chrono::milliseconds(1000));
	mergeSort(arr, 0, size-1);
	//bubbleSort(arr, size);
	
	clearScreen();
	//display first array
	//cout << "initial array:\n";
	//displayArr(oldArr);
	displayArr(arr);
	cout << "sorted array ^ \n";
	
	return 0;
}
