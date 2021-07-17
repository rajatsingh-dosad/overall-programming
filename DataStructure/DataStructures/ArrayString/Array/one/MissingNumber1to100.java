
class MissingNumber {

	public static void main(String[] args) {

		int arr[] = {10,11,12,14,15};

		for(int i=0;i<arr.length;i++) {

			if(arr[i] != 10+i) {
				System.out.println("Missing number is "+(10+i));
				break;
			}

		}
	}
}
