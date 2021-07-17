
class BinarSearchIterate {

	

	public static void main(String[] args)  {

		int arr[] = {1,2,3,5,345,443,6345};

		int x = 443;
		
		int start = 0;
		int end = arr.length-1;
		int ind = -1;

		while(start <= end) {


			int mid = (start+end)/2;
			if(arr[mid]==x) {
				ind = mid;
				break;
			}
			else if(arr[mid] > x)
				end = mid-1;
			else if(arr[mid] < x)
				start = mid+1;
		}

		if(ind >-1)
			System.out.println("Element found at index "+ind);
		else
			System.out.println("Element not present in the array");

		
	}
}
