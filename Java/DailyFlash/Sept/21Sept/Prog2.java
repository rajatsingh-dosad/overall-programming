
class Prog2 {

	public static void main(String[] args) {

		for(int i=2;i>=0;i--) {
			
			for(int j=1;j<=2*i-1;j++) {

				System.out.print("  ");
			}

			for(int k=2;k>=0;k--) {

				System.out.print("* ");
			}
			System.out.println();
		}
	}
}
