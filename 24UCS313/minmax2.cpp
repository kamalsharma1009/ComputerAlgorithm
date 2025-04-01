#include<iostream>

int minmax(int arr[], int n) {
	int min = arr[0];
	int max = arr[0];
	
	for (int i = 0; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	
	std::cout<<"Min : "<<min<<"\nMax : "<<max;
}
int main() {
	int n;
	std::cout<<"Enter No. of elements: ";
	std::cin>>n;
	
	int arr[n];
	
	std::cout<<"Enter array elements: ";
	for (int i = 0; i < n; i++) {
		std::cin>>arr[i];
	}

	minmax(arr, n);
} 


