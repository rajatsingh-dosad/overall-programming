

class Pattern4 {

	public static void main(String[] args) {

		for(int i=1;i<=5;i++) {

			for(int j=1;j<=5;j++) {

				if(i==3 && j==3)
					System.out.print("1 ");
				else if(((i==2 || i==4 ) && (j==2 || j==3 ||j==4)) || (i==3 && (j==2 || j==4)))
					System.out.print("2 ");
				else
					System.out.print("3 ");
			}
				System.out.println();
		}
	}
}

