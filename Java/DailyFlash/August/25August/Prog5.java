

class Pattern {

	public static void main(String[] args) {

		for(int i=1; i<=4; i++) {

			for(int j=1; j<=4; j++) {

				if(i==1 || i==3)
					System.out.print("0 ");
				else
					System.out.print("1 ");
			}
			System.out.println();
		}
	}
}

