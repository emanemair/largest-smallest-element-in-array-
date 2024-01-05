#include<iostream>

using namespace std; 

int largest_number(int[], int, int); 
int smallest_number(int[], int, int); 

int main() {

	int arr[] = { 4,20,-5,2,5 }; 

	cout << "largest element in the array : " << largest_number(arr, 0, (sizeof(arr) / sizeof(arr[0]) - 1)) << "\n";
	cout << "smallest element in the array : " << smallest_number(arr, 0, (sizeof(arr) / sizeof(arr[0]) - 1)) << "\n";



	return 0; 
}


int largest_number(int arr[], int lower_index, int upper_index) {
	int max; 
	if (upper_index == lower_index)
		return arr[lower_index]; // the array have one element 
	else {
		max = largest_number(arr, lower_index + 1, upper_index); 
		if (arr[lower_index] >= max)
			return arr[lower_index];
		else return max; 
	}
}

int smallest_number(int arr[], int lower_index, int upper_index) {
	int min; 
	if (upper_index == lower_index)
		return arr[lower_index]; 
	else {
		min = smallest_number(arr, lower_index + 1, upper_index); 
		if (arr[lower_index] <= min)
			return arr[lower_index];
		else return min; 
	}
}