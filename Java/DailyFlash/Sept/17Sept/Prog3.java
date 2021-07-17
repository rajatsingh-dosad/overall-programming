

class Pattern3 {

	public static void main(String[] args) {

		for(int i=1;i<=5;i++) {

			if(i==2 || i==3 || i==4) {

				for(int j=1;j<=2;j++) {

					System.out.print(i+" ");
				}
			}
			else {
				for(int j=1;j<=5;j++) {

					System.out.print(i+" ");
				}
			}
			System.out.println();
		}
	}
}
