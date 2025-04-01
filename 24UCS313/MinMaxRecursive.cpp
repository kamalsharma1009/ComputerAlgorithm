#include<iostream>

int Min(x, y) {
	if(y - x <= 1) {
		return 
	}
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
	
	int x = 0;
	int y = n - 1;
	
	int min = Min(x, y);
	int max = Max(x, y);
	
	std::cout<<"Min : "<<min<<"\nMax : "<<max;
}
