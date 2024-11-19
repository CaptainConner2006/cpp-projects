#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void randomize(int arr[], int n){
	unsigned seed = 0;
	shuffle(arr, arr + n, default_random_engine(seed));
}

void sortArr(int arr[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                //swapping values
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
	int size = 100001;
	int* arr = new int[size];
	for(int i = 0; i < size; i++){
		arr[i] = i;
	}
	randomize(arr, size);
	sortArr(arr, size);
	for(int i = 0; i < size; i++){
		cout << arr[i] << endl;
	}
	
	return 0;
}
