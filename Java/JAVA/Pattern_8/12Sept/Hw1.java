

class HW1 {

	public static void main(String[] args) {

		for(int i=1;i<=4;i++) {

			for(int j=3; j>=i; j--) {

				System.out.print("  ");
			}

			for(int k=1; k<=i*2-1; k++) {
				if(i==1 || i==3)
					System.out.print("* ");
				else
					System.out.print("= ");
			}
			System.out.println();
		}
	}
}

