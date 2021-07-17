
class Prog2 {

	public static void main(String[] args) {

		int[] iarray = new int[5];

		iarray[0] = 1;
		iarray[1] = 2;
		iarray[2] = 3;
		iarray[3] = 4;
		iarray[4] = 5;

		System.out.println("Even numbers in array are: ");
		for(int i=0; i<5; i++) {

			if(iarray[i]%2==0)
				System.out.print(iarray[i]+" ");
		}
		System.out.println();
	}
}
