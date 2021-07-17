

class Pattern5 {

	public static void main(String[] args) {

		for(int i=1;i<=10; i++) {

			if(i<=5) {

				for(int j=5; j>=i; j--) {

					System.out.print("= ");
				}
				System.out.println();
			}
			else {
				int num = i-5;
				for(int k=1; k<=num; k++) {

					System.out.print("* ");
				}
				System.out.println();
			}
		}
	}
}
