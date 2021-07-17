
class Prog1 {

	public static void main(String[] args) {

		int[][] arr= {{10,20,30},{40,50,60}};

		int count = 0;

		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				count++;
			}
		}

		System.out.println("The length of the array is "+count);
	}
}
