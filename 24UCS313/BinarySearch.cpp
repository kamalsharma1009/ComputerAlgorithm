#include<iostream>

int main() {
	int n,mid,l,h,key,flag=0,ctr=0,ch;
	
	std::cout<<"Enter No. of elements: ";
	std::cin>>n;
	
	int arr[n];
	
	std::cout<<"Enter no.s in ascending order: ";
	for(int i=0; i<n; i++) {
		std::cin>>arr[i];
	}
	
	std::cout<<"The entered list is...";
	for(int i=0; i<n; i++) {
		std::cout<<arr[i]<<" ";
	}
	
	
	while(1) {
		std::cout<<"\n\nEnter Choice: \n1.Search Element\n2.Exit\nChoice: ";
		std::cin>>ch;
		switch(ch) {
			case 1:  
				std::cout<<"\nEnter the key value: ";
				std::cin>>key;
				l = 0;
				h = n-1;
				
				while(l<=h){
					mid = l+(h-l)/2;
					ctr++;
					if(arr[mid]==key) {
						flag = 1;
						break;
					}
					else if(arr[mid]<key) {
						l = mid + 1;
					}
					else if(arr[mid]>key) {
						h = mid - 1;
					}
				}
				
				if(flag) {
					std::cout<<"Key Found at arr["<<mid<<"] after "<<ctr<<" comparisions!!";
				}
				else {
					std::cout<<"Key not Found!!";
				}
				break;
				
			case 2: exit(0);
			
			default: 
				std::cout<<"Enter no.s only!!!";
				break;
		}
	}
}


