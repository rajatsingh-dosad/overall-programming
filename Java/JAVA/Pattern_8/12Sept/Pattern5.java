

class Pattern5 {

	public static void main(String[] args) {

		for(int i=1; i<=4; i++ ) {
			int num = 1;
			for(int j=3; j>=i; j--) {

				System.out.print("  ");
			}

			for(int k=1; k<=i*2-1; k++) {

				System.out.print(num+" ");
				if(k>=i)
					num--;
				else
					num++;
			}
			System.out.println();
		}
	}
}
