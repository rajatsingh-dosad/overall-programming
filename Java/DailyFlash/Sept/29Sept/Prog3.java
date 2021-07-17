
class Prog3 {

	public static void main(String[] args)  {
		
		int[] iarray = new int[5];
		iarray[0] = 4;
		iarray[1] = 5;
		iarray[2] = 3;
		iarray[3] = 2;
		iarray[4] = 6;
		
		int sum = 0;
		float avg = 0.0f;
		for(int i=0;i<5;i++) {

			sum  = sum + iarray[i];
		}

		avg = sum / 5;
		System.out.printf("Average of elements in array are %.2f\n",avg);
		


	}
}
