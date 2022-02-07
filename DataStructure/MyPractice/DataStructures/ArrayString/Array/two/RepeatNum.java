
class NonRepeatNum {

	public static void main(String[] args) {

		int arr[] = {1,1,2,2,3,4,4,5,5};
		
		int flag = 0;
		for(int i=0;i<arr.length;i++) {	

				if(arr[i]!=arr[i+1]) {
					System.out.println("The number that not repeated twice is "+arr[i]);
					flag = 1;
					break;
				}
				else 
					i++;
		}
	}
}
