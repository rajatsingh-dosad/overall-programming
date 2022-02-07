
#include <iostream>
using namespace std;


int binarySearch(int arr[],int i,int j,int val) {

	int mid;
      	mid = (i+j)/2;
	
	if(j>=i) {
		if(arr[mid] == val)
			return mid;
		else if(arr[mid] > val)
			return binarySearch(arr,i,mid-1,val);
		else if(arr[mid] < val)
			return binarySearch(arr,mid+1,j,val);
	}
	return 0;
}


int main() {

	int arr[] = {1,4,5,6,10,34,343};
	int x= 34;

	int val = binarySearch(arr,0,sizeof(arr)/sizeof(int),x);
	if(val!=0)
		cout << "Value is present at index: " << val << endl;
	else 
		cout << "Value is not present in the array " << endl;
	
		
	return 0;
}
