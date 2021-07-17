
class Prog6 {

	public static void main(String[] args) {
		
		int arr[] = {3,60,33,23,5};

		for(int i=0;i<arr.length-1;i++) {

			for(int j=0;j<arr.length-1-i;j++) {

				if(arr[j] > arr[j+1]) {

					arr[j] = arr[j] + arr[j+1];
					arr[j+1] = arr[j] - arr[j+1];
					arr[j] = arr[j] - arr[j+1];
				}
			}
		}	
		
		for(int i=0;i< arr.length;i++) {

			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
}
