
class BinarSearchRecursion {

	static int binarySearch(int arr[] ,int start , int end,  int x) {

		int mid = (start+end)/2;

		if(arr[mid] == x)
			return mid;
		else if(arr[mid] > x)
			return binarySearch(arr,start , mid-1,x);

		else if(arr[mid] < x)
			return binarySearch(arr,mid+1,end,x);
		return -1;
	}

	public static void main(String[] args) {

		int arr[] = {1,2,34,534,234};
		int x = 534;
		
		int ind = binarySearch(arr,0,arr.length-1,x);
		System.out.println(ind);
	}
}
