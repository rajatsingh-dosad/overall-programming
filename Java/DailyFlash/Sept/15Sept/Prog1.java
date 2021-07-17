

class Pattern1 {

	public static void main(String[] args) {

		char ch = 'A';

		for(int i=0;i<5;i++) {

			for(int j=3;j>=i;j--) {

				System.out.print("  ");
			}

			for(int k=0;k<=i;k++) {

				System.out.print(ch+" ");
				ch++;
			}
			ch = (char)(ch-i);
			System.out.println();
		}
	}
}


