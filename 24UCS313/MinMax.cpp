#include<iostream>
int main() {
	int n, min, max, c1 = 0, c2 = 0;
	std::cout<<"Enter No. of elements: ";
	std::cin>>n;
	
	int arr[n];
	
	std::cout<<"Enter array elements: ";
	for (int i = 0; i < n; i++) {
		std::cin>>arr[i];
	}
	
	min = arr[0];
	max = arr[0];
	
	for (int i = 0; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
			c1++;
		}
		if(arr[i] > max) {
			max = arr[i];
			c2++;
		}
		
	}
	
	std::cout<<"Min : "<<min<<"\t\tComparisons: "<<c2<<"\nMax : "<<max<<"\tComparisons: "<<c2;
}
