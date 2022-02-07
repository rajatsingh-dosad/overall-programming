
class RemoveDuplicatesInPlace {

	public static void main(String[] args) {

		int arr[] = {1,1,2,2,3};
		
		int n = arr.length;
		for(int i=0;i<n;i++) {

			if(arr[i] == arr[i+1]) {

				for(int j=i+1;j<n-1;j++) {
					
					arr[j] = arr[j+1];
				}
				n = n-1;	
			}
		}


		System.out.println(n);
		for(int i=0;i<n;i++) {

			System.out.print(arr[i]+" ");
		}

	}	
}	
