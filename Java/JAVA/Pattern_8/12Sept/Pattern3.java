
class Pattern3 {

	public static void main(String[] args) {
		
		char ch ='A';
		for(int i=1;i<=4;i++) {

			for(int j=3;j>=i;j--) {

				System.out.print("  ");
			}

			for(int k=1; k<=i; k++) {

				System.out.print(ch+" ");
			}
			ch++;
			System.out.println();
		}
	}
}
