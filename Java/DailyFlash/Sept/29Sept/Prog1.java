
class Prog1 {

	public static void main(String[] args) {

		int[] iarray = new int[11];

		iarray[0] = 10;
		iarray[1] = 21;
		iarray[2] = 45;
		iarray[3] = 76;
		iarray[4] = 13;
		iarray[5] = 5;
		iarray[6] = 25;
		iarray[7] = 0;
		iarray[8] = 0;
		iarray[9] = 0;
		iarray[10] = 0;
		
		System.out.println("Score of players are: ");
		for(int i=0;i<11;i++) {

			System.out.println("Player"+(i+1)+" = "+iarray[i]);

		}
	}
}

