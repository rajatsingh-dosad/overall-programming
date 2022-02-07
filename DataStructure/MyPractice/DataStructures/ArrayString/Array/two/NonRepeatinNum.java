
class NonRepeatinNum {

	public static void main(String[] args) {

		int arr[] = {10,10,20,20,30,30};
		
		int flag = 0;
		for(int i=0;i<arr.length;i++) {

			for(int j=i+1;j<arr.length;j++) {

				if(arr[i] == arr[j]) {
					flag = 0;
					break;
				}
				else 
					flag = 1;

			}
			if(flag ==1 ) {
				System.out.println("The first non repeating number is " + arr[i] );
				break;
			}
		}
		if(flag==0)
			System.out.println("There is no non-repeating number ");
	}
}	
