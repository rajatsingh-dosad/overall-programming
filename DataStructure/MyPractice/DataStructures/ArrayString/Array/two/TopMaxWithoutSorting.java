
class TopMaxWithoutSorting {

	public static void main(String[] args) {

		int arr[] = {3,3434,23,6904,34};

		int max1= 0;
		int max2 = -1;

		for(int i=0;i<arr.length;i++) {

			if(arr[i] > max1) {

				max2 = max1;
				max1 = arr[i];
			}else if(arr[i] > max2) {

				max2 = arr[i];
			}
		}

		System.out.println("THe first max number is "+max1);
		System.out.println("THe second max number is "+max2);
	}
}
